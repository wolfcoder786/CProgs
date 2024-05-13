// WAP to multiply two matrices and display it

#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter number1 of rows:");
    scanf("%d", &n1);
    printf("Enter number1 of column :");
    scanf("%d", &n2);

    int arr[n1][n2];
    printf("Enter Matrix A:\n");
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("Enter a%d%d :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int arry[n1][n2];
    printf("Enter Matrix B:\n");
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("Enter b%d%d :", i, j);
            scanf("%d", &arry[i][j]);
        }
    }

    int a[n1][n2];
    printf("Product:\n");
    for (i = 1; i <= n1; i++)
    {

        for (j = 1; j <= n2; j++)
        {
            a[i][j] = 0;
            for (int k = 1; k <= n2; k++)
            {
                a[i][j] += (arr[i][k] * arry[k][j]);
            }
           printf("%d ", a[i][j]); 
        }
        printf("\n");
    }



    return 0;
}
