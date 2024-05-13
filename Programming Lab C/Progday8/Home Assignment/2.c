/*WAP to test whether a number is Armstrong Number or not.
(A number is said to be Armstrong when the sum of cubes of its digit is equal with the original number.
Ex-153)*/
#include<stdio.h>
int main(){
    int i ,n,f ; 
    printf("Enter a number :");
    scanf("%d",&n);
    for ( i = 0; i <= sizeof(n); i++)
    {
        int h = (n/100)*(n/100)*(n/100) ;
        int g = ((n%100)/10)*((n%100)/10)*((n%100)/10) ;
        int e = ((n%100)%10)*((n%100)%10)*((n%100)%10);
        f = h+g+e ;
    }
    if (f == n )
        {
            printf("The given number is a armstong number");
            
        }
    else
    {
        printf("The given number is  not a armstrong number ");
    }
        
    
return 0 ;
}