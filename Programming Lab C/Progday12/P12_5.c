// WAP to check whether two matrices are equal or not
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, i, j, equal ;
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

    printf("Enter Matrix B:\n");
    printf("Enter number of rows:");
    scanf("%d", &n3);
    printf("Enter number1 of column :");
    scanf("%d", &n4);
    int arry[n3][n4];
    for (i = 1; i <= n3; i++)
    {
        for (j = 1; j <= n4; j++)
        {
            printf("Enter b%d%d :", i, j);
            scanf("%d", &arry[i][j]);
        }
    }
    if (n1 == n3 && n2 == n4)
    {
        printf("Matrix may be compared\n");
        for (i = 1; i <= n1; i++)
        {
            for (j = 1; j <= n4; j++)
            {
                if (arr[i][j] != arry[i][j]);
                {
                    equal = 0;
                    break;
                }
            }
        }
    }
    else
    {
        printf("The matrix cannot be compared\n");
        exit(1);
    }
    if (equal == 1)
    {
        printf("Two matrix are equal\n ");
    }
    else
    {
        printf("Unequal Matrix\n");
    }

    return 0;
}