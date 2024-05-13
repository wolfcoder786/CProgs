// WAP to print even series within 50.
#include<stdio.h>
int main(){
    int a,i ; 
    printf("Enter a number uptill which even number to be printed :");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
        if ((i%2)==0)
        {
            printf("%d\n",i);
        }
        
    }
    

return 0 ;
}