#include<stdio.h>
#include<stdlib.h>
int main(){
int n ,m,i;
printf("Enter the size of array :");
scanf("%d",&n);
int* arr ;
arr = (int*)malloc(n*sizeof(int));
arr[0] = 1 ;
arr[1] = 2 ;
arr[3] = 3 ;
printf("%d\n",arr[0]);
printf("%d",arr[3]);



return 0 ;
}