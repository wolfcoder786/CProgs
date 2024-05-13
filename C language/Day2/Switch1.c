#include<stdio.h>
int main(){
    int age ;
    printf("Enter  your Age : ");
    scanf("%d",&age);
    switch (age)
    {       
    case 4:
        printf("Your age is 4 ");
        break;
    case 16:
        printf("Your age is 16\n ");
        break;
    case 24:
        printf("Your age is 24\n ");
        break;
    case 64:
        printf("Your age is 64\n ");
        break;
    
    default:
       printf("Your age is neither 4,16,24 nor 64\n");

        break;
    }
}