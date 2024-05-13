#include<stdio.h>
int main(){
    int a;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    int b = a/100;
    int c = (a-((a/100)*100))/10;
    int d = a%10;
    int sum = b+c+d;
    printf("Sum of digit : %d",sum);

return 0 ;
}