// WAP to find out factors of a number.
#include<stdio.h>
int main(){
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Factors of %d:\n",num);
    for (int  i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    
return 0 ;
}