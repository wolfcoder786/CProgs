// WAP to find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int n1, n2, i, j, check = 1;
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
    int trans[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            trans[j][i] = mat[i][j];
            
        }
    }
printf("Transpose of matrix:\n");
 for ( i = 1; i <=n1 ; i++)
 {
    for (  j= 1; j <= n2; j++)
    {
        printf("%d",trans[i][j]);
    }
    printf("\n");
 }
 
    return 0;
}