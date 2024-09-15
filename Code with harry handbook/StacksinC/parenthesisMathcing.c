#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size ;
    int top ;
    char* arr ;
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
char push(struct stack *ptr , int val ){
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
char pop(struct stack *ptr ){
    if (isEmpty(ptr))
    {
        printf("Stack Underflowed, Cannot be popped");
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top-- ;
        printf("Popped element is %d\n",val);
    }
    
    
}
int parenthesismatch(char* exp ){
    struct stack* s ;
    s->size = 100 ;
    s->top = -1 ;
    for (int i = 0; i < '\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(s,'(');
        }
        else if (exp[i]==')'){
            if (isEmpty(s))
            {
                return 0 ;

            }
            pop(s);
        }
        
    }
    if (isEmpty(s))
    {
        return 1 ;

    }
    return 0 ;
        
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

    char * exp = "8*(9)";
    if (parenthesismatch(exp))
    {
        printf("Matching");
    }
    else
    {
        printf("Not Matching ");
    }
    

return 0 ;
}