// WAP to test whether an inputted number is a strong number or not.
// (A number is said to be Strong if sum of factorial of digits is equal to the original number)
#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number = number * factorial(number - 1);
    }
}
int main()
{
    int n, digit, sum = 0, b;
    printf("Enter a num:");
    scanf("%d", &n);
    b = n;
    for (; n > 0; n = n / 10)
    {
        digit = n % 10;
        // printf("The number %d factorial is %d\n", digit, factorial(digit));
        sum = sum + factorial(digit);
    }
    // printf("Sum :%d\n", sum);
    if (b == sum)
    {
        printf("%d is a strong number \n", b);
    }
    else
    {
        printf("%d is not a strong number\n", b);
    }

    return 0;
}