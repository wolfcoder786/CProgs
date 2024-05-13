// WAP to calculate power of a number using a user defined function
#include <stdio.h>
int powr(int x, int y)
{
    int power = 1;
    for (int i = 1; i <= y; i++)
    {
        power *= x;
    }
    return power;
}
int main()
{
    int a, b;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter the power to be raised:");
    scanf("%d", &b);
    int result = powr(a, b);
    printf("Result:%d", result);

    return 0;
}