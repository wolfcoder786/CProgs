#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, i, j, k;
    printf("For Matrix A :-\n");
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of cols:");
    scanf("%d", &n2);
    int matA[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("a%d%d", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("For Matrix B :-\n");
    printf("Enter number of rows: ");
    scanf("%d", &n3);
    printf("Enter number of cols:");
    scanf("%d", &n4);
    int matB[n3][n4];
    for (i = 1; i <= n3; i++)
    {
        for (j = 1; j <= n4; j++)
        {
            printf("b%d%d", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    if (n2!=n3)
    {
        printf("The number of columns of MatA is not equal to number of rows MatB");
    }
    int MatC[n1][n4];
    for ( i = 1; i <= n1; i++)
    {
        for ( j =1; i <=n4; j++)
        {
            MatC[i][j] = 0 ;
            for ( k = 1; k <=n3 ; i++)
            {
                MatC[i][j] += matA[i][k]*matB[k][j];
            }
            
        }
        
    }
    printf("Product of MatA and MatB:\n");
    for ( i = 1; i <=n1; i++)
    {
        for (j = 1; j<=n4; j++)
        {
            printf("%d",MatC[i][j]);
        }
        printf("\n");
    }
    

    
    return 0;
}