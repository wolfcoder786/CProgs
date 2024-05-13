// WAP to find the Trace (sum of the diagonal elements) of a given mxn matrix
#include<stdio.h>
int main(){
    int n1 , n2 , i,j;
    printf("Enter a matrix:\n");
    printf("Enter number of row:");
    scanf("%d", &n1);
    printf("Enter number of cols:");
    scanf("%d", &n2);
    int arr[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("a%d%d:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
int sum = 0 ;
for ( i = 1; i<=n1; i++)
{
    for ( j = 1; j<=n2; j++)
    {
        if (i= j )
        {
            printf("%d\n",arr[i][j]);
            sum += arr[i][j];
        }
        
        
    }
    
}
printf("Sum =%d",sum);
    
return 0 ;
}