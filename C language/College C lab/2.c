// WAP to find out the sum of the N numbers stored in an array of integers.
#include<stdio.h>
int main(){
    int n , i ;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int marks[n];
    for ( i = 1; i <=n; i++)
    {
        printf("Enter number %d:",i);
        scanf("%d",&marks[i]);
    }
    int sum = 0 ;
    for ( i = 1; i <=n  ; i++)
    {
       sum = sum + marks[i];

    }
    printf("The array is :");
    for ( i = 1; i <= n; i++)
    {
        printf("%d",marks[i]);
    }
    
    printf("Sum:",sum );

     
return 0 ;
}