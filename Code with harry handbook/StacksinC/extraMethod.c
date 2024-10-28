#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;
};

// Function to check if the stack is empty
int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

// Function to check if the stack is full
int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

// Push element onto stack
void push(struct stack *ptr, int val) {
    if (isFull(ptr)) {
        printf("Stack Overflow, Cannot push %d\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop element from stack
int pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow, Cannot pop\n");
        return -1;  // Return a special value to indicate underflow
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Display elements of the stack
void display(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= ptr->top; i++) {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
}

// Function to insert an element at the bottom of the stack
void insertAtBottom(struct stack *ptr, int item) {
    if (isEmpty(ptr)) {
        push(ptr, item);
    } else {
        int temp = pop(ptr);
        insertAtBottom(ptr, item);
        push(ptr, temp);
    }
}

// Function to reverse the stack using recursion
void reverseStack(struct stack *ptr) {
    if (!isEmpty(ptr)) {
        int temp = pop(ptr);
        reverseStack(ptr);
        insertAtBottom(ptr, temp);
    }
}

int main() {
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the stack
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = n;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    while (1) {
        printf("\n====Menu====");
        printf("\n1. Push");
        printf("\n2. Reverse");
        printf("\n3. Pop");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a;
                printf("Enter element you want to push: ");
                scanf("%d", &a);
                push(s, a);
                break;
            }
            case 2: {
                reverseStack(s);
                printf("Stack reversed.\n");
                break;
            }
            case 3: {
                int poppedValue = pop(s);
                if (poppedValue != -1) {
                    printf("Popped element: %d\n", poppedValue);
                }
                break;
            }
            case 4: {
                display(s);
                break;
            }
            case 5: {
                printf("Exiting...\n");
                exit(0);
            }
            default: {
                printf("Invalid choice! Please enter a valid option.\n");
                break;
            }
        }
    }

    return 0;
}
