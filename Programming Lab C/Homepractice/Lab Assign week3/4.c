// WAP to determine whether a year entered through the keyboard is a leap year or not. 
#include<stdio.h>
int main(){
    int year1 ;
    printf("Enter a year1 :");
    scanf("%d",&year1);
    int a  = year1%4;
    
    if (a == 0)
    {
       printf("Entered year %d is a leap year",year1);
    }
    else
    {
        printf("The Enetered year %d is not a leap year",year1);
    }
       


return 0 ;
}