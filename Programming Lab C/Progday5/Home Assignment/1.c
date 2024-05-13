// swaping the number using a single statement
#include<stdio.h>
int main(){
    int  a , b ;
    printf("Enter a number1 : ");
    scanf("%d",&a);
    printf("Enter a number2 : ");
    scanf("%d",&b);
    a ^= b ^= a ^= b;
    printf("Num1 = %d",a);
    printf("Num2 = %d",b);


return 0 ;
}