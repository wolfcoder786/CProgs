//  Write a program using function to find average of three numbers.
#include<stdio.h>
int avg(int a , int b , int c){
    int sum = a + b + c ;
    return sum/3 ;
}
int main(){
    int a , b , c ;
    printf("Enter num1 :");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Enter num3 :");
    scanf("%d",&c);
    printf("The average of the numbers :%d",avg(a,b,c)) ;
return 0 ;
}