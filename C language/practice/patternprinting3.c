#include<stdio.h>
int main(){
    int rows, i , j ;
    int alphabet = 65; 
    printf("Enter number of row:");
    scanf("%d",&rows);
    for ( i = rows - 1; i>-0; i--)
    {
        for ( j = rows-1; j>=i; j--)
        {
            printf("%c",alphabet+j);
            
        }
        printf("\n");
    }
    
return 0 ;
}