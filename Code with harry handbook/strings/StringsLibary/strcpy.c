#include<stdio.h>
#include<string.h>
int main(){
char st[] = "Hello how are you ?";
char target[30];
printf("Enter mainstring:%s\n",st);
strcpy(target,st);

printf("Copied String:%s",target);

return 0 ;
}