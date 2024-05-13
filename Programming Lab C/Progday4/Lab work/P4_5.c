#include<stdio.h>
int main(){
    int a , b , c ;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Before Swaping\n");
    printf("num1:%d\n",a); 
    printf("num2:%d\n",b);
    c = a;
    a = b ;
    b = c ;
    printf("After Swaping\n");
    printf("num1:%d\n",a);
    printf("num2:%d\n",b);
    return 0 ;
}