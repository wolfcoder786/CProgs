#include<stdio.h>
int main(){
    int n1 , n2 , i ,j,eq = 0;
    printf("Enter number of rows:");
    scanf("%d",&n1);
    printf("Enter number of cols:");
    scanf("%d",&n2);
    int arr[n1][n2];
    for ( i = 1; i <=n1; i++)
    {
        for ( j = 1; j <=n2; j++)
        {
            printf("Enter a%d%d",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    int arry[n1][n2];
    for ( i = 1; i <=n1; i++)
    {
        for ( j = 1; j <=n2; j++)
        {
            printf("Enter b%d%d",i,j);
            scanf("%d",&arry[i][j]);
        }
        
    }
   for ( i = 1; i <=n1; i++)
   {
    for ( j = 1; j<=n2; j++)
    {
        if (arr[i][j]!=arry[i][j])
        {
            eq = 1 ;
            break;
        }
        
    }
    
      }
   if (eq ==0 )
   {
    printf("matrix are equal");
   }
   else
   {
    printf("unequal");
   }
   
   
    
return 0 ;
}