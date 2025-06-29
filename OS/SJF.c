#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Arrays
    int pid[n];   // Process ID
    int at[n];    // Arrival Time
    int bt[n];    // Burst Time
    int ct[n];    // Completion Time
    int tat[n];   // Turnaround Time
    int wt[n];    // Waiting Time
    bool done[n]; // Process done or not

    // Input
    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time of Process %d: ", pid[i]);
        scanf("%d", &at[i]);
        printf("Enter Burst Time of Process %d: ", pid[i]);
        scanf("%d", &bt[i]);
        done[i] = false;
    }

    int currentTime = 0;
    int completed = 0;

    while (completed < n) {
        int minBT = 9999;
        int index = -1;

        // Find the process with the shortest burst time among arrived processes
        for (int i = 0; i < n; i++) {
            if (!done[i] && at[i] <= currentTime && bt[i] < minBT) {
                minBT = bt[i];
                index = i;
            }
        }

        if (index == -1) {
            // No process has arrived yet
            currentTime++;
        } else {
            // Process selected
            ct[index] = currentTime + bt[index];
            tat[index] = ct[index] - at[index];
            wt[index] = tat[index] - bt[index];
            currentTime = ct[index];
            done[index] = true;
            completed++;
        }
    }

    // Print results
    printf("\nSJF Scheduling:\n");
    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");

    int totalTAT = 0, totalWT = 0;
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
        totalTAT += tat[i];
        totalWT += wt[i];
    }

    float avgTAT = (float)totalTAT / n;
    float avgWT = (float)totalWT / n;

    printf("\nAverage Turnaround Time = %.2f", avgTAT);
    printf("\nAverage Waiting Time = %.2f\n", avgWT);

    return 0;
}
