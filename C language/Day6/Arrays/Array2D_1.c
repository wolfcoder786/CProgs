#include<stdio.h>
int main(){
    int i,j;
    int marks[2][4]={{2,12,23,12},{3,223,34,21}};//i---->row, j--->coloumn
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("The markno %d,%d : %d\n ",i,j,marks[i][j]);
        }
        
    }
    

return 0 ;
}