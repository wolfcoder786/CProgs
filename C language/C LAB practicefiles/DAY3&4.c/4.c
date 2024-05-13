// Write a C program to perform swapping of two integers without using a third variable.
#include<stdio.h>
int main(){
    int a, b ;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter number2:");
    scanf("%d",&b);
    printf("Before Swapping :-\n");
    printf("number1:%d\n", a);
    printf("number2:%d\n", b);
    a = a+b ;
    b = a - b ;
    a = a - b ;
    printf("After Swaping:\n");
    printf("number1:%d\n", a);
    printf("number2:%d\n", b);

return 0 ;
}