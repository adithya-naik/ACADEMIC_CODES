#include <stdio.h>
#include <string.h>

int main() {
    int alloc[10][10], max[10][10];         // Allocation and Max claim matrices
    int avail[10], work[10], total[10];     // Available, Work, and Total resources
    int need[10][10];                       // Need matrix = max - alloc
    int i, j, k, n, m;                      // n = processes, m = resources
    int count = 0, c = 0;
    char finish[10];

    printf("Enter the number of processes and resources: ");
    scanf("%d%d", &n, &m);

    // Initially mark all processes as unfinished
    for (i = 0; i < n; i++) {
        finish[i] = 'n';
    }

    // Input Max (Claim) matrix
    printf("Enter the Max (Claim) matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &max[i][j]);

    // Input Allocation matrix
    printf("Enter the Allocation matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &alloc[i][j]);

    // Input total number of resources
    printf("Enter the Total Resources: ");
    for (i = 0; i < m; i++)
        scanf("%d", &total[i]);

    // Step 1: Calculate total allocated resources
    for (i = 0; i < m; i++)
        avail[i] = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            avail[j] += alloc[i][j];

    // Step 2: Calculate available resources = total - allocated
    for (i = 0; i < m; i++)
        work[i] = total[i] - avail[i];

    // Step 3: Calculate need matrix = max - alloc
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];

CheckAgain:
    for (i = 0; i < n; i++) {
        c = 0;

        // Check if all needed resources of this process can be satisfied
        for (j = 0; j < m; j++) {
            if ((need[i][j] <= work[j]) && (finish[i] == 'n')) {
                c++;
            }
        }

        // If yes, simulate process execution
        if (c == m) {
            printf("\nAll resources can be allocated to Process %d", i + 1);

            // Add its allocated resources back to work
            printf("\nAvailable resources after executing process %d: ", i + 1);
            for (k = 0; k < m; k++) {
                work[k] += alloc[i][k];
                printf("%4d", work[k]);
            }

            finish[i] = 'y';
            count++;

            printf("\nProcess %d executed? : %c", i + 1, finish[i]);
        }
    }

    // If not all processes are finished, repeat
    if (count != n)
        goto CheckAgain;
    else
        printf("\n\nSystem is in a safe state.");

    return 0;
}
