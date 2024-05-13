// WAP to find the sum of two matrices of order 2x2 using multidimensional arrays.
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter number1 of rows:");
    scanf("%d", &n1);
    printf("Enter number1 of column :");
    scanf("%d", &n2);

    float arr[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("Enter a%d%d :", i, j);
            scanf("%f", &arr[i][j]);
        }
    }

  float arry[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("Enter b%d%d :", i, j);
            scanf("%f", &arry[i][j]);
        }
    }

    float a[n1][n2];
     printf("SUM:\n");
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            a[i][j] = arr[i][j] + arry[i][j];
        }
    }
   
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("%0.1f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
