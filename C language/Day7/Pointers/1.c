#include<stdio.h>
int main(){
    int a  = 89;
    int* ptra = &a ;
    printf("The value of a is : %d\n",a);
    printf("The value of a is : %d\n",*ptra);
    printf("The value of a is : %x\n",&a);
    printf("The value of a is : %p\n",&ptra);
    printf("The value of a is : %p\n",ptra);
return 0 ;
}