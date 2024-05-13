// WAP to find out factors of a number
#include<stdio.h>
int main(){
    int i,  num ;
    printf("Enter num :");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        if (num%i == 0 )
        {
            printf("%d\n",i);

        }
        
    }
    
return 0 ;
}