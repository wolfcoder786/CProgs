#include<stdio.h>
void func(int* ptr){
    
    for (int  i = 0; i <5; i++)
    {
        printf("The element at index %d is %d\n",i,*(ptr+i));
    }
    *(ptr+3)=34;
    
}
int main(){
    int arr[]={22,23,45,21,32};
    func(arr);
    func(arr);
return 0 ;
}