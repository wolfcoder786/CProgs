#include<stdio.h>
int main(){
    int i , j , rows ;
    printf("ENter the number of row:");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)  
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);

        }
    printf("\n");  
    }
    
return 0 ;
}