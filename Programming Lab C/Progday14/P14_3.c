// WAP to display upper case letter and lowe case letter using loop and function
#include<stdio.h>
int lower(){
    for ( int i = 97; i <=122; ++i)
    {
        printf("%c ",i);
    }
    printf("\n");
}
int upper(){
    for (int i = 65; i <=90; i++)
    {
        printf("%c ",i);
    }
    
}
int main(){
    printf("Lowercase Alphabets:\n");
    lower();
    printf("Uppercase Alphabets:\n");
    upper();

return 0 ;
}