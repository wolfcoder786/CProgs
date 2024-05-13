/*WAP to test whether a number is Palindrome Number or not.
(A number is said to be Palindrome when its reverse is equal with the original number.
Ex-121)*/
#include<stdio.h>
int main(){
    int n, sum =  0, temp , r ;
    printf("Enter a num :");
    scanf("%d",&n);
    temp == n ;

    while (n>0)
    {
        r = n%10;
        sum = (sum*10)+r;
        n = n/10;

    }
    if (temp== sum)
    {
        printf("It is Palindrome");

    }
    else{
        printf("It is not palindrome");
    }
    
    
return 0 ;
}

