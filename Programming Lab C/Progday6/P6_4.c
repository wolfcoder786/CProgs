//WAP to check the year is leap year or not
#include<stdio.h>
int main(){
    int year ;
    printf("Enter a Year to check it is  a leap year or not :");
    scanf("%d",&year);
    int leap=year%4 ;
    if (leap == 0 ) 
    {
        printf("The Year %d is a  leap year",year);
    }
    else
    {
        printf("The Year %d is not a leap year",year);

    }
    
    
return 0 ;
}