#include<stdio.h>
int main(){
    int a ;
    printf("Enter  a six digit number :");
    scanf("%d",&a);
    int first_digit = a/100000;
    int last_digit  = a%10 ;
    int sum  = first_digit+last_digit ;
    printf("The sum of sum of first digit and last digit:%d",sum);
return 0 ;
}