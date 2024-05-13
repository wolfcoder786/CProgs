/*To test whether a number is armstrong no. or not*/
#include <stdio.h>
int main(){
    int a,b,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    b=0;
    int d=n;
    while(n>=1){
        int c = n%10;
        b=b+(c*c*c);
        n=n/10;
        printf("%d",n);
    }
    if(b==d){
        printf("The given number is a armstrong no.");
    }
    else {
        printf("The given number is not a armstrong no.");
    }
    return 0;
}