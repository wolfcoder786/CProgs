// WAP to print GCD and LCM of two numbers
#include <stdio.h>
int main()
{
    int a, b, n, m, x, y, i, p, c;
    printf("Enter  number1:");
    scanf("%d", &a);
    printf("Enter  number2:");
    scanf("%d", &b);

    int max = a;
    if (a < b)
    {
        max = b;
    }
    for (i = 1; i <= max; i++)
    {
        n = a % i;
        if (n == 0)
        {
            x = i;
        }
        m = b % i;
        if (m == 0)
        {
            y = i;
        }
        if (x == y)
        {
            p = x;
        }
        c = (a * b) / p;
    }
    printf("GCD of %d and %d is %d\n", a, b, p);
    printf("LCm of %d and %d is %d\n", a, b, c);
    return 0;
}