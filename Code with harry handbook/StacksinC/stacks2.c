#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size ;
    int top ;
    int* arr ;
};
int isEmpty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1 ;
    }
    return 0 ;
}
int isFull(struct stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1 ;
    }
    return 0 ;
    
}
void push(struct stack *ptr , int val ){
    if (isFull(ptr))
    {
        printf("Stack Overflowed, Cannot be pushed");
    }
    else
    {
        ptr->top++ ;
        ptr->arr[ptr->top] = val ;

    }
    
    
}
void pop(struct stack *ptr ){
    if (isEmpty(ptr))
    {
        printf("Stack Underflowed, Cannot be popped");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top-- ;
        printf("Popped element is %d\n",val);
    }
    
    
}
void display(struct stack *ptr){
    if (isEmpty(ptr))
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = 0; i<= ptr->top; i++)
        {
            printf("%d ",ptr->arr[i]);

        }
        printf("\n");
    }
    
    
}
int main(){
    int n ;
    printf("Enter the size of the stack ");
    scanf("%d",&n);
    struct stack *s  = (struct stack *)malloc(sizeof(struct stack ));
    s->size = n ;
    s->top =-1 ;
    s -> arr =(int*)malloc(s->size*sizeof(int));
    // printf("%d\n",isEmpty(s));
    // printf("%d\n",isFull(s));
    while (1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        int choice ;
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:{
            int val ;
            printf("Enter the value to be pushed:");
            scanf("%d",&val);
            push(s, val);
            break;
        }
          
        case 2:
            pop(s);
            break;
        case 3 :
            display(s);
            break;
        case 4 :
            free(s->arr);
            free(s);    
            printf("Exiting ....");
            return 0 ;
        
        default:
            printf("Invalid choice");
            break;
        }
    }
    

return 0 ;
}