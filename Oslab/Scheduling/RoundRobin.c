#include <stdio.h>

struct Process {
    int pid;  // Process ID
    int burst_time;  // Burst Time
    int remaining_time;  // Remaining Time
    int arrival_time;  // Arrival Time
    int completion_time;  // Completion Time
    int turnaround_time;  // Turnaround Time
    int waiting_time;  // Waiting Time
};

void roundRobinScheduling(struct Process processes[], int n, int quantum) {
    int time = 0;
    int completed = 0;
    
    // Initialize remaining time
    for (int i = 0; i < n; i++) {
        processes[i].remaining_time = processes[i].burst_time;
    }
    
    // Continue until all processes are completed
    while (completed < n) {
        for (int i = 0; i < n; i++) {
            if (processes[i].remaining_time > 0) {
                // Process has remaining time
                if (processes[i].remaining_time > quantum) {
                    // Process needs more than quantum time
                    time += quantum;
                    processes[i].remaining_time -= quantum;
                } else {
                    // Process will complete within quantum
                    time += processes[i].remaining_time;
                    processes[i].completion_time = time;
                    processes[i].remaining_time = 0;
                    completed++;
                    
                    // Calculate turnaround time and waiting time
                    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
                }
            }
        }
    }
}

void printProcessDetails(struct Process processes[], int n) {
    float avg_waiting_time = 0, avg_turnaround_time = 0;
    
    printf("\nProcess ID\tBurst Time\tArrival Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", 
               processes[i].pid,
               processes[i].burst_time,
               processes[i].arrival_time,
               processes[i].completion_time,
               processes[i].turnaround_time,
               processes[i].waiting_time);
               
        avg_waiting_time += processes[i].waiting_time;
        avg_turnaround_time += processes[i].turnaround_time;
    }
    
    avg_waiting_time /= n;
    avg_turnaround_time /= n;
    
    printf("\nAverage Waiting Time: %.2f", avg_waiting_time);
    printf("\nAverage Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main() {
    int n, quantum;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process processes[n];
    
    printf("Enter time quantum: ");
    scanf("%d", &quantum);
    
    // Input process details
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("\nFor Process %d:\n", i + 1);
        printf("Enter Burst Time: ");
        scanf("%d", &processes[i].burst_time);
        printf("Enter Arrival Time: ");
        scanf("%d", &processes[i].arrival_time);
    }
    
    roundRobinScheduling(processes, n, quantum);
    printProcessDetails(processes, n);
    
    return 0;
}