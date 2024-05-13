// WAP to check whether a number n is prime number or not.
#include <stdio.h>
int main()
{
    int num,a = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num==0 || num ==  1)
    {
        a = 1 ;
    }
    for ( int i = 2; i <=num/2   ; i++)
    {
        if (num%i== 0 )
        {
            a = 1 ;
            break ;

        }
        
    }
    if (a == 0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    
    

    return 0;
}