// WAP to test whether a number is Perfect Number or not.
// (A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number.
// Ex-6)
#include <stdio.h>
int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("sum:%d\n", sum);
    if (sum == n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number ",n);
    }
    
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    printf("Factors are :\n");
    perfect(num);
 
    

    return 0;
}