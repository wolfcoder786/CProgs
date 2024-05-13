// WAP to perform the addition of two integers and display the result. Input must be given by   user.
#include<stdio.h>
int main (){
    int a , b , c ;
    printf("Enter number1 :");
    scanf("%d",&a);
    printf("Enter number2 :");
    scanf("%d",&b);
    c =  a + b ;
    printf("Sum :\n");
    printf("%d + %d = %d",a,b,c);
    return  0;
    
}