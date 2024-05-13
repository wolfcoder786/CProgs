// WAP to determine whether a year entered through the keyboard is a leap year or not. 
#include<stdio.h>
int main(){
    int year1 ;
    printf("Enter a year1 :");
    scanf("%d",&year1);
    int year2;
    printf("Enter a year2 :");
    scanf("%d",&year2);
    int a  = year1%4;
    int b  = year2%4;
    
    if (a == 0 && b == 0)
    {
       printf("Entered both year1 : %d and year2: %d is a leap year",year1,year2);
    }
    else if (a==0 && b != 0)
    {
        printf("year1: %d is a leap year but year2:%d is not a leap year",year1,year2);
    }
    else if (a!=0 && b == 0)
    {
        printf("year2: %d is a leap year but year1:%d is not a leap year",year2,year1);
    }
    
    else
    {
        printf("Both year entered are not leap year");
    }
       


return 0 ;
}