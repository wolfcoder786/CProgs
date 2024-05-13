#include<stdio.h>
int main(){
    int sec,hr,min,s ;
    printf("Enter the time :");
    scanf("%d",&sec);
    hr = sec/3600 ;
    min = (sec-(3600*2))/60;
    s =(sec-(3600*2)-(min*60));
    printf("%dseconds  = %dhr %dmin %ds", sec , hr ,min, s);
return 0 ;
}