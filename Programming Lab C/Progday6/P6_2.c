//WAP to check a character is vowel or consonant 
#include<stdio.h>
int main(){
    char ch ;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
        {
            printf("The character %c is a vowel ",ch);

        }
        else
        {
            printf("The character %c is a consonant ",ch);
        }
    }

    else
    {
        printf("The character %c is  not a alphabet ",ch);
    }
    
    
return 0 ;
}