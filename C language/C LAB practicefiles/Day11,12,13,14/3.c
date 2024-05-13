// WAP to find largest element stored in an array.
#include<stdio.h>
int main(){
    int n , i ;
    printf("Enter size of an array :");
    scanf("%d",&n);
    int arr[n];
    for ( i = 1; i <=n; i++)
    {
        printf("Enter number%d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Array:\n");
    for ( i =1; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max = arr[1];
    for ( i = 1; i <=n; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("The largest number of the array :%d",max);
    

return 0 ;
}