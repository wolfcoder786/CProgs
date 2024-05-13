#include<stdio.h>
int func(int* ptr){
    for ( int i = 0; i <4; i++)
    {
        printf("The element at index %d is %d\n",i,*(ptr+i));
    }
    return 0 ;
}
int main(){
    int arr[]={12,2,312,7};
    func(arr);
return 0 ;
}