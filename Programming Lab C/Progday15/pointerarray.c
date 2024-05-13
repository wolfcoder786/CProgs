#include<stdio.h>
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int* ptr = arr ;
    printf("%d\n",arr);
    printf("%d\n",ptr);
    printf("%d\n",arr + 1);
    printf("%d",*ptr);
    

return 0 ;
}