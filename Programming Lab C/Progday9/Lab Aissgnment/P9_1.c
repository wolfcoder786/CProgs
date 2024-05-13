//write  a program to swap the first and last digit of a number;
#include<stdio.h>
#include<math.h>
int main(){
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   int digit  = log10(num);
   int near_10 = pow(10, digit);
   int round = near_10+1 ;
   int first = num / round;
   int end = (num%round)%10 ;
   int number = (num%round)/10;
   
   int swap = (end*round) + (number*10) + (first) ;
   printf("Swap number is:%d\n",swap);
   
   
    
return 0 ;
}