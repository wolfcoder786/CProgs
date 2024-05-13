// WAP to take 10 different numbers as input. Print their sum and average.
#include<stdio.h>
int main(){
    int i ,n,sum = 0   ;
    
    for ( i = 1; i <= 10 ; i++)
    {
     printf("Enter  number  %d :",i);
     scanf("%d",&n);
     sum = sum + n ;
    }
    float  avg  = sum/10 ;
    printf("The sum of 10 numbers :%d\n",sum);
    printf("The Avg is :%f ",avg);

return 0 ;
}