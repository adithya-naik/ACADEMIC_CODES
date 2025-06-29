#include <stdio.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Arrays to store Arrival Time, Burst Time, Completion Time, Turnaround Time, Waiting Time
    int pid[n];      // Process IDs
    int at[n];       // Arrival Time
    int bt[n];       // Burst Time
    int ct[n];       // Completion Time
    int tat[n];      // Turnaround Time
    int wt[n];       // Waiting Time

    // Input Arrival and Burst Times
    for (int i = 0; i < n; i++) {
        pid[i] = i + 1; // Process IDs like 1, 2, 3, ...
        printf("\nEnter Arrival Time of Process %d: ", pid[i]);
        scanf("%d", &at[i]);
        printf("Enter Burst Time of Process %d: ", pid[i]);
        scanf("%d", &bt[i]);
    }

    // Sort processes by Arrival Time using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (at[j] > at[j + 1]) {
                // Swap arrival time
                int temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                // Swap burst time
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                // Swap process ID
                temp = pid[j];
                pid[j] = pid[j + 1];
                pid[j + 1] = temp;
            }
        }
    }

    // Calculate Completion Time, Turnaround Time, Waiting Time
    int currentTime = 0;

    for (int i = 0; i < n; i++) {
        // If CPU is idle
        if (currentTime < at[i]) {
            currentTime = at[i];
        }

        ct[i] = currentTime + bt[i];
        currentTime = ct[i];

        tat[i] = ct[i] - at[i];  // Turnaround Time = Completion - Arrival
        wt[i] = tat[i] - bt[i];  // Waiting Time = Turnaround - Burst
    }

    int totalTAT = 0, totalWT = 0;
    // Print Output
    printf("\nFCFS Scheduling:\n");
    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");

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
