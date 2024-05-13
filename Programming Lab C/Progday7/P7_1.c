// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is 
// in lowercase, otherwise display an appropriate message
#include<stdio.h>
int main(){
    char ch;
    int ascii;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {
        int up = ch;
        ascii = up - 32 ;
        printf("%c converted  into %c",ch,ascii);
    }
    else if (ch>='A'&&ch<='Z')
    {
        int low = ch;
        ascii = low + 32 ;
        printf("%c converted  into %c",ch,ascii);
    }
    else
    {
        printf("Enter character is not a alphabet ");
    }
    
    
return 0 ;
}
