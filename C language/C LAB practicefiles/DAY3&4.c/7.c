// WAP to find the sum of 1st and last of a six-digit number. Number must be a user input
#include<stdio.h>
int main(){
    int a ;
    printf("Enter  a number :");
    scanf("%d",&a);
    int first_digit = a/100000;
    int last_digit = a % 10 ;
    int sum  = first_digit + last_digit ;
    printf("Sum of %d + %d = %d", first_digit, last_digit, sum);

return 0 ;
}