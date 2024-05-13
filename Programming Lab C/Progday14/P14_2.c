// WAP to find the factorial of a number n by using a suitable user defined function.
#include <stdio.h>
int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial of %d : %d", x, factorial(x));
    return 0;
}