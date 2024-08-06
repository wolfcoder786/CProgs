#include<stdio.h>
int sum(int a , int b ){
    return a + b ;
}
int main(){
    int a , b ;
    printf("Enter a num1 :");
    scanf("%d",&a);
    printf("Enter a num2 :");
    scanf("%d",&b);
    printf("Sum :%d",sum(a,b));
return 0 ;
}