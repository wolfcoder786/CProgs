#include <stdio.h>
#include <limits.h>

struct Process {
    int pid;  // Process ID
    int arrival_time;  // Arrival Time
    int burst_time;  // Burst Time
    int remaining_time;  // Remaining Time
    int completion_time;  // Completion Time
    int turnaround_time;  // Turnaround Time
    int waiting_time;  // Waiting Time
    int started;  // Flag to track if process has started
};

void srtfScheduling(struct Process processes[], int n) {
    int current_time = 0;
    int completed = 0;
    int prev = 0;
    
    // Initialize remaining time and started flag
    for (int i = 0; i < n; i++) {
        processes[i].remaining_time = processes[i].burst_time;
        processes[i].started = 0;
    }
    
    // Continue until all processes are completed
    while (completed != n) {
        int shortest = -1;
        int min_remaining = INT_MAX;
        
        // Find process with shortest remaining time among arrived processes
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && 
                processes[i].remaining_time > 0) {
                if (processes[i].remaining_time < min_remaining) {
                    min_remaining = processes[i].remaining_time;
                    shortest = i;
                }
                if (processes[i].remaining_time == min_remaining) {
                    // If remaining times are equal, choose the one that arrived earlier
                    if (processes[i].arrival_time < processes[shortest].arrival_time) {
                        shortest = i;
                    }
                }
            }
        }
        
        if (shortest == -1) {
            // No process is available, increment time
            current_time++;
            continue;
        }
        
        // If process is starting for the first time
        if (processes[shortest].started == 0) {
            processes[shortest].started = 1;
        }
        
        // Reduce remaining time of selected process
        processes[shortest].remaining_time--;
        current_time++;
        
        // If process completes
        if (processes[shortest].remaining_time == 0) {
            completed++;
            processes[shortest].completion_time = current_time;
            
            // Calculate turnaround time and waiting time
            processes[shortest].turnaround_time = 
                processes[shortest].completion_time - processes[shortest].arrival_time;
            processes[shortest].waiting_time = 
                processes[shortest].turnaround_time - processes[shortest].burst_time;
            
            if (processes[shortest].waiting_time < 0)
                processes[shortest].waiting_time = 0;
        }
    }
}

void printProcessDetails(struct Process processes[], int n) {
    float avg_turnaround_time = 0, avg_waiting_time = 0;
    
    printf("\nProcess ID\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               processes[i].pid,
               processes[i].arrival_time,
               processes[i].burst_time,
               processes[i].completion_time,
               processes[i].turnaround_time,
               processes[i].waiting_time);
               
        avg_turnaround_time += processes[i].turnaround_time;
        avg_waiting_time += processes[i].waiting_time;
    }
    
    avg_turnaround_time /= n;
    avg_waiting_time /= n;
    
    printf("\nAverage Turnaround Time: %.2f", avg_turnaround_time);
    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
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
    
    srtfScheduling(processes, n);
    printProcessDetails(processes, n);
    
    return 0;
}