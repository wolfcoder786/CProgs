/*Write a program to swap two numbers without using a third variable*/
#include<stdio.h>
int main(){
    int a , b ;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Before Swaping\n");
    printf("num1:%d\n",a); 
    printf("num2:%d\n",b);
    a = a + b ;
    b = a - b;
    a = a - b ;
    printf("After Swaping\n");
    printf("num1:%d\n",a);
    printf("num2:%d\n",b);
    

    
    
    
    
    }