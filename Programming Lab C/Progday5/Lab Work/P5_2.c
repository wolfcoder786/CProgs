#include<stdio.h>
int main(){
    int d,km, m ;
    printf("Enter the distance :");
    scanf("%d",&d);
    km = d/1000 ;
    m  = d%1000;
    printf("%d meters = %dkm %dm",d,km,m);
    
return 0 ;
}