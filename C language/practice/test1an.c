#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, n;
    printf("Enter the number of rows and coloumn of mat1\n");
    scanf("%d%d", &a, &b);
    int mat1[a][b];
    printf("Enter the number of rows and coloumn of mat2\n");
    scanf("%d%d", &e, &f);
    int mat2[e][f];
    // int mat[1][1];
    if (b != e)
    {
        printf("col of mat1 doesn't match to row of mat2");
        return 0;
    }
    int mat3[a][f];
    printf("Enter the elements\n");
    for (c = 0; c < a; c++)
    {
        for (d = 0; d < b; d++)
        {
            printf("Enter a[%d][%d] value:\n", c, d);
            scanf("%d", &mat1[c][d]);
        }
    }
    for (c = 0; c < e; c++)
    {
        for (d = 0; d < f; d++)
        {
            printf("Enter b[%d][%d] value:\n", c, d);
            scanf("%d", &mat2[c][d]);
        }
    }
    for (c = 0; c < a; c++)
    {
        for (d = 0; d < f; d++)
        {
            mat3[c][d] = 0;
            for (int k = 0; k < b; k++)
            {

                mat3[c][d] += (mat1[c][k] * mat2[k][d]);
            }
        }
    }
    printf("The matrix multiplication will be\n");
    for (c = 0; c < a; c++)
    {
        for (d = 0; d < f; d++)
        {
            printf(" %d", mat3[c][d]);
        }
        printf("\n");
    }
    return 0;
}