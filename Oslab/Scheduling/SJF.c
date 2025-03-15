#include <stdio.h>

// Structure to represent a process
struct Process
{
    int pid;
    int burst_time;
    int arrival_time;
    int waiting_time;
    int tat_time; // Turnaround Time
};

// Function to sort processes by arrival time, then by burst time
void sortProcess(struct Process p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].arrival_time > p[j + 1].arrival_time ||
                (p[j].arrival_time == p[j + 1].arrival_time && p[j].burst_time > p[j + 1].burst_time))
            {
                struct Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of Processes: ");
    scanf("%d", &n);
    struct Process pro[n];

    // Taking inputs
    for (int i = 0; i < n; i++)
    {
        printf("Process ID for P%d: ", i + 1);
        scanf("%d", &pro[i].pid);
        printf("Arrival Time for P%d: ", i + 1);
        scanf("%d", &pro[i].arrival_time);
        printf("Burst Time for P%d: ", i + 1);
        scanf("%d", &pro[i].burst_time);
    }

    // Sort processes based on arrival time, then burst time
    sortProcess(pro, n);

    int total_waiting_time = 0, total_tat = 0;
    pro[0].waiting_time = 0;
    pro[0].tat_time = pro[0].burst_time;

    // Initialize totals with the first process' turnaround and waiting times
    total_waiting_time = pro[0].waiting_time;
    total_tat = pro[0].tat_time;

    // Calculate waiting time and turnaround time for all processes
    for (int i = 1; i < n; i++)
    {
        pro[i].waiting_time = pro[i - 1].waiting_time + pro[i - 1].burst_time - pro[i].arrival_time;
        if (pro[i].waiting_time < 0)
            pro[i].waiting_time = 0; // If process arrives after CPU becomes idle

        pro[i].tat_time = pro[i].waiting_time + pro[i].burst_time;

        total_waiting_time += pro[i].waiting_time;
        total_tat += pro[i].tat_time;
    }

    // Displaying process information
    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               pro[i].pid,
               pro[i].arrival_time,
               pro[i].burst_time,
               pro[i].waiting_time,
               pro[i].tat_time);
    }

    // Display average waiting time and turnaround time
    printf("\nAverage Waiting Time: %.2f", (float)total_waiting_time / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)total_tat / n);

    return 0;
}
