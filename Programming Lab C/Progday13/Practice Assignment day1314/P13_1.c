// WAP to check whether a matrix is identity matrix or not.
#include <stdio.h>
int main()
{
    int n1, n2, i, j, check = 1;
    printf("Enter a matrix:\n");
    printf("Enter number of row:");
    scanf("%d",&n1);
    printf("Enter number of cols:");
    scanf("%d",&n2);  
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
            if (i ==  j && mat[i][j] != 1)
            {
                check = 0;
                break;
            }
            else if ( i!= j && mat[i][j] != 0 )  
            {
                check = 0 ;
                break;
            }
            
        }
    }
    if (check == 1)
    {
        printf("The matrix is a Identity matrix");
    }
    else
    {
        printf("The matrix is not a identity matrix");
    }

    return 0;
}