// WAP to convert given second into its equivalent hour, minute and second as per the following format.
#include<stdio.h>
int main(){
    int s ;
    printf("Enter the time in seconds ");
    scanf("%d",&s);
    int hr , min , sec ;
    hr = (s/3600);
    min = (s -(hr*3600))/60 ;
    sec  = s -(hr*3600) - (min*60 );
    printf("%ds = %dhr %dmin %dsec",s , hr, min, sec);

return 0 ;
}