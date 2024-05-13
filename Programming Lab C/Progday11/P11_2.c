// WAP to find out the sum of the N numbers stored in an array of integers.
#include<stdio.h>

int main(){
    int n , i ;
    printf("Enter size of an array :");
    scanf("%d",&n);
    int arr[n];
    for ( i = 1; i <= n; i++)
    {
        printf("Enter number%d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements in array are : ");
    for ( i = 1; i <= n; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
  
    int sum = 0 ;
    for ( i = 1; i <=n ; i++)
    {
        sum = sum + arr[i];
        

    }
    printf("Sum of the elements in array :%d",sum);

    
    
    
return 0 ;
}