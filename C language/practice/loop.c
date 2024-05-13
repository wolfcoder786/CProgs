#include<stdio.h>
int main(){
    int i ,n, p ,r ,t ;
    printf("Enter number of customer:");
    scanf("%d",&n);
    for ( i = 0; i < n ; i++ )
    {
        printf("Enter principle:");
        scanf("%d",&p);
        printf("Enter rate:");
        scanf("%d",&r);
        printf("Enter time period:");
        scanf("%d",&t);
        int si  = (p*r*t)/100;
        printf("Simple intrest :%d",si);
    }
    
return 0 ;
}