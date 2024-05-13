// WAP to check whether a number is prime or not using function
#include<stdio.h>
int prime(int n ){
    int count = 0 ;
    for (int  i = 1; i <=n ; i++)
    {
       if (n%i==0)
       {
        count++;
       }
              
    }
    if (count==2)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n ",n);
    }
    

}
int main(){
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Checking %d is prime or not\n",num);
    prime(num);
return 0 ;
}