//Fibonaaci series 
#include<stdio.h>
int main(){
    int i, num, a= 0 , b= 1 , c ;
    printf("Enter the number of terms to be generated:");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        printf("%d\n",a);
        c = a + b ;
        a = b ;
        b = c ;

    }
    

return 0 ;
}