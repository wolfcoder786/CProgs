// WAP to create an array that can store N integers and display the contents of the array
#include<stdio.h>
int main(){
    int num ;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    int arr[num];
    for (int i = 1; i <=num; i++)
    {
        printf("Enter number%d :",i);
        scanf("%d",&arr[i]);
    }
    printf("The array is :\n");
    for (int i = 1; i <=num; i++)
    {
        printf("%d\n",arr[i]);
    }
    

return 0 ;
}