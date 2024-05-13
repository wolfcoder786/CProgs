//WAP to print even series within 50
#include<stdio.h>
int main(){
    int  i ;
    for ( i = 1; i < 50; i++)
    {
        int a  = i%2;
        if (a == 0 )
        {
            printf("%d\n",i);

        }
        
    }
    
return 0 ;
}