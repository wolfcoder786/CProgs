#include<stdio.h>
int main(){
int marks[] = {1,2,3,4};
// int* ptr = marks ; or
int* ptr  = &marks[0];

//printing the array
for (int i = 0; i < 4 ; i++)
{
    printf("The element at %d : %d\n", i , *ptr);
    ptr++;
}



return 0 ;
}