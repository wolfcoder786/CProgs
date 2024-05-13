// WAP to read a character from the user and test whether it is a vowel or consonant or not an alphabet. 
#include<stdio.h>
int main(){
    char ch ;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if ((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
    {
        if (ch=='a'||ch=='A'||ch=='I'||ch=='i'||ch=='E'||ch=='e'||ch=='o'||ch=='O'||ch=='U'||ch=='u')   
        {
            printf("The character %c is  a vowel",ch);

        }
        else
        {
            printf("The Character %c is  a consonant ",ch);
        }
        
    }
    else
    {
        printf("The character %c is not a alphabet",ch);
    }
return 0 ;
}