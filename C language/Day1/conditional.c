#include<stdio.h>
int main (){
    int a ; 
    printf("Enter your age :");
    scanf("%d",&a);
    printf("Your Entered age is %d\n",a);
    if (a>18)
    {
        printf("Your Entered age is eligible to vote\n");

    }
    else if (a== 18)
    {
        printf("You are teen\n");
    }
    else
    {
        printf("You are child so as of now you are not eligible \n");
    }
    return 0 ;

    
}