//WAP to find out sum of digits of a number.(see again try once by for loop )
#include<stdio.h>
int main(){
    int num,sum = 0 , m ;
    printf("Enter a num :");
    scanf("%d",&num);
    while (num>0)
    {
         m = num%10 ;
         sum = sum + m ;
         num = num/10;

    }
    printf("Sum of the digits :%d",sum);

    
return 0 ;
}