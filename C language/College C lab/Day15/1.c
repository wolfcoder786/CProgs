// WAP to add two numbers entered through the keyboard by using a suitable user defined function. 
#include<stdio.h>
int sum(int x , int y ){
    int add = x + y ;
    return x +  y ;
}
int main(){
    int x , y;
    printf("Enter a number1 :");
    scanf("%d",&x);
    printf("Enter number2:");
    scanf("%d",&y);
    printf("%d + %d = %d",x,y,sum(x,y));
return 0 ;
}