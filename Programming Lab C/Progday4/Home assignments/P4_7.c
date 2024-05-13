#include<stdio.h>
int main(){
    int a , b , c, d, e;
    printf("Enter the number of 1st subject :");
    scanf("%d",&a);
    printf("Enter the number of 2nd subject :");
    scanf("%d",&b);
    printf("Enter the number of 3rd subject :");
    scanf("%d",&c);
    printf("Enter the number of 4th subject :");
    scanf("%d",&d);
    printf("Enter the number of 5th subject :");
    scanf("%d",&e);
    int f  = (a+b+c+d+e)/5;
    printf("The Average is:%d\n",f);
    float g  = (a+b+c+d+e)/10;
    printf("Percentage is :%f",g);
    return 0 ;



}