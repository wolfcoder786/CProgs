#include <stdio.h>

struct Process {
    int pid;            // Process ID
    int arrival_time;   // Arrival Time
    int burst_time;     // Burst Time
    int completion_time;// Completion Time
    int turnaround_time;// Turnaround Time
    int waiting_time;   // Waiting Time
};

// Function to sort processes by arrival time
void sortByArrivalTime(struct Process processes[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (processes[j].arrival_time > processes[j+1].arrival_time) {
                struct Process temp = processes[j];
                processes[j] = processes[j+1];
                processes[j+1] = temp;
            }
        }
    }
}

void fcfsScheduling(struct Process processes[], int n) {
    // Sort processes by arrival time
    sortByArrivalTime(processes, n);
    
    // Calculate completion time for first process
    processes[0].completion_time = processes[0].arrival_time + processes[0].burst_time;
    
    // Calculate completion time for rest of the processes
    for (int i = 1; i < n; i++) {
        // If there's a gap between processes
        if (processes[i].arrival_time > processes[i-1].completion_time) {
            processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time;
        } else {
            processes[i].completion_time = processes[i-1].completion_time + processes[i].burst_time;
        }
    }
    
    // Calculate turnaround time and waiting time for all processes
    for (int i = 0; i < n; i++) {
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
    }
}

void printGanttChart(struct Process processes[], int n) {
    printf("\nGantt Chart:\n");
    printf("-");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < processes[i].burst_time; j++) {
            printf("--");
        }
        printf("-");
    }
    printf("\n|");
    
    // Print process IDs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < processes[i].burst_time - 1; j++) {
            printf(" ");
        }
        printf("P%d", processes[i].pid);
        for (int j = 0; j < processes[i].burst_time - 1; j++) {
            printf(" ");
        }
        printf("|");
    }
    printf("\n-");
    
    // Print bottom border
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < processes[i].burst_time; j++) {
            printf("--");
        }
        printf("-");
    }
    printf("\n");
    
    // Print timeline
    printf("0");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < processes[i].burst_time; j++) {
            printf("  ");
        }
        printf("%d", processes[i].completion_time);
    }
    printf("\n");
}

void printProcessDetails(struct Process processes[], int n) {
    float avg_waiting_time = 0, avg_turnaround_time = 0;
    
    printf("\nProcess Details:\n");
    printf("PID\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].pid,
               processes[i].arrival_time,
               processes[i].burst_time,
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
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process processes[n];
    
    // Input process details
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("\nFor Process %d:\n", i + 1);
        printf("Enter Arrival Time: ");
        scanf("%d", &processes[i].arrival_time);
        printf("Enter Burst Time: ");
        scanf("%d", &processes[i].burst_time);
    }
    
    fcfsScheduling(processes, n);
    printGanttChart(processes, n);
    printProcessDetails(processes, n);
    
    return 0;
}