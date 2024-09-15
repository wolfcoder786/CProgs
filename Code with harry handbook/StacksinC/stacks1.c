#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
    // below lines have same meaning as above
    //     else{
    //         return 0 ;
    //     }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    //manual pushing of number ;
    s->arr[0] = 10 ;
    s->top++ ;
    if (isEmpty(s) == 1)
    {
        printf("The stack is empty ");

    }
    else
    {
        printf("Stack is not empty ");
    }
    
    return 0;
}