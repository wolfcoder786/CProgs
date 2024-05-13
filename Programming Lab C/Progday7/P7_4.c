/*Print weekday name program according to given weekday number using switch-case
weekday number (0-6) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)*/
#include<stdio.h>
int main(){
    int a ;
    printf("Enter the weekday:");
    scanf("%d",&a);
    switch (a)
    {
    case  0:
        printf("This is MONDAY");
        break;
    case  1 :
        printf("This is TUESDAY");
        break;
    case  2:
        printf("This is WEDNESDAY");
        break;
    case  3:
        printf("This is THURSDAY");
        break;
    case  4:
        printf("This is FRIDAY ");
        break;
    case  5:
        printf("This is SATURDAY");
        break;
    case  6:
        printf("This is SUNDAY");
        break;
 
    
    default:
       printf("Invalid input");
        break;
    }
return 0 ;
}