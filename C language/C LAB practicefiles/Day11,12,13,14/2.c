// WAP to find out the sum of the N numbers stored in an array of integers.
#include<stdio.h>
int main(){
    int n, i,sum = 0 ;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for ( i = 1; i <=n; i++)
    {
        printf("Enter number%d:",i);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("SUM:%d",sum);
return 0 ;
}