#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

// Stack structure to help check for duplicate parentheses
typedef struct Stack
{
    char arr[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *stack)
{
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack)
{
    return stack->top == -1;
}

// Function to push an element to the stack
void push(Stack *stack, char ch)
{
    if (stack->top == MAX - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top] = ch;
}

// Function to pop an element from the stack
char pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow!\n");
        return '\0';
    }
    return stack->arr[stack->top--];
}

// Function to check for duplicate parentheses
bool checkDuplicateParentheses(char *expr)
{
    Stack stack;
    initStack(&stack);

    for (int i = 0; i < strlen(expr); i++)
    {
        char ch = expr[i];

        // If current character is a closing bracket ')'
        if (ch == ')')
        {
            char top = pop(&stack);
            int elementCount = 0;

            // Pop until matching opening bracket '(' is found
            while (top != '(')
            {
                elementCount++;
                top = pop(&stack);
            }

            // If the count is less than 1, there are duplicate parentheses
            if (elementCount < 1)
            {
                return true;
            }
        }
        // Push other characters and opening bracket '('
        else
        {
            push(&stack, ch);
        }
    }
    return false;
}

int main()
{
    char expr[MAX];

    printf("Enter an expression: ");
    fgets(expr, MAX, stdin);
    expr[strcspn(expr, "\n")] = 0; // Remove trailing newline

    if (checkDuplicateParentheses(expr))
    {
        printf("Duplicate parentheses found.\n");
    }
    else
    {
        printf("No duplicate parentheses found.\n");
    }

    return 0;
}
