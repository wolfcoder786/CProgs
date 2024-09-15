#include<stdio.h>
#include<stdlib.h>
int main(){
int n ,m,i;
printf("Enter the size of array :");
scanf("%d",&n);
int* ptr ;
ptr = (int*)malloc(n*sizeof(int));
ptr[0] = 1 ;
ptr[1] = 2 ;
ptr[3] = 3 ;
free(ptr);
printf("%d\n",ptr[0]);

printf("%d",ptr[3]);



return 0 ;
}