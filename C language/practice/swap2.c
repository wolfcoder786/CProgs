#include<stdio.h>
int main(){
    int n , i,count=0 ; 
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for ( i = 1; i <=n; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for ( i = 1; i <=n; i++)
    {
        if (arr[i]==arr[i+1])
        {
            arr[i+1]= 0;
            count++;
            
        }
        
     
    }
    printf("Number of Duplicate elements:%d\n",count);
    for ( i = 1; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0 ;
}