// with argument and return value
#include<stdio.h>
int sum(int a , int b ){
    return a + b ;

}
int main(){
    int  a,b,c ;
    printf("Enter num1 : ");
    scanf("%d",&a);
    printf("Enter num2 : ");
    scanf("%d",&b);
    c = sum(a,b);
    printf("The sum of the given function is :%d",c);

return 0 ;
}