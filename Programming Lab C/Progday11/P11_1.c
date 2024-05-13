// WAP to create an array that can store N integers and display the contents of the array
#include<stdio.h>
int main(){
    int n , i ;
    printf("Enter size of an array :");
    scanf("%d",&n);
    int marks[n];
    
    for ( i = 0; i < n ; i++)
    {
       printf("Enter the number%d :", i+1);
       scanf("%d",&marks[i]);

    }
    printf("The elements in the array are :");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",marks[i]);
    }
    // printf("Element 0 :",marks[0]);
    
return 0 ;
}