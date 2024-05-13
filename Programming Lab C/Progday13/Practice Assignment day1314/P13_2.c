// WAP to find out the frequency of even and odd numbers in a matrix.
#include <stdio.h>
int main()
{
    int n1, n2, i, j, even = 0, odd = 0;
    printf("Enter a matrix:\n");
    printf("Enter number of row:");
    scanf("%d", &n1);
    printf("Enter number of cols:");
    scanf("%d", &n2);
    int mat[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("a%d%d", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            if ((mat[i][j] % 2) == 0)
            {
                ++even;
            }
            else
            {
                ++odd;
            }
        }
    }
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("The frequency of odd number : %d\n", odd);
    printf("The frequency of even number :%d", even);
    return 0;
}