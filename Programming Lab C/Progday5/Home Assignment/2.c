//reverse a three digit number 
#include<stdio.h>
int main(){
    int a ;
    printf("Enter a 3 digit number :");
    scanf("%d",&a);
    int b = a/100;
    int c = (a-((a/100)*100))/10;
    int d = a%10;
    int final = (((d*100)+c*10)+b);
    printf("The final is:%d",final);

return 0 ;
}
