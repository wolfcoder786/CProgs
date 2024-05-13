//WAP in C to check whether a number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int b = a%2;
    if ( b == 0)
    {
        printf("The entered number %d is even",a);

    }
    else
    {
        printf("The number %d is odd",a);

    }
    
return 0 ;
}