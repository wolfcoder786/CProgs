#include<stdio.h>
int sum(int* a , int* b ){
    *a = 6 ;
    return *a+*b;
}
int main(){
    int x = 1 ; int y  = 10 ;
    printf("The sum of %d and %d : %d", x, y, sum(&x,&y));
return 0 ;
}