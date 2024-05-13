// 2. WAP to Find factorial f a number using recursion
#include<stdio.h>
int factorial(int n ){
    if (n==1||n== 0)
    {       
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
    
}
int main(){
    int a ;
    printf("Enter number whose fcatorial you want :");
    scanf("%d",&a);
    printf("The factorial of %d : %d",a,factorial(a));

return 0 ;
}