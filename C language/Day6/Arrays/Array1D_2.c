//using for loop
#include<stdio.h>
int main(){
    int marks[10];
    int i ;
    for ( i = 0; i <= 10 ; i++)
    {
        printf("Enter mark %d :",i);
        scanf("%d",&marks[i]);
    }
for ( i = 0; i <=10 ; i++)
{
    printf("The mark %d :%d \n",i,marks[i]);
}

    
return 0 ;
}