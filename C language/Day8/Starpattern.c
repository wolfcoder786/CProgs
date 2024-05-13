#include<stdio.h>
void star(int rows){
    int i , j ;

    for ( i = 0; i < rows  ; i++)
    {
        for ( j = 0; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int main(){
    int n ;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    star(n);


return 0 ;
}