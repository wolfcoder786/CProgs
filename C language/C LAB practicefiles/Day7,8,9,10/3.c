// WAP to find out sum of digits of a number.
#include<stdio.h>
int main(){
    int a, m ;
    printf("Enter a number :");
    scanf("%d",&a);
    int sum = 0 ;
    while (a>0)
    {
        m = a %10 ;
        sum = sum + m ;
        a = a / 10 ;
    }
    
    printf("Sum :%d",sum);
return 0 ;
}