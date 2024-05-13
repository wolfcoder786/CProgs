// 3.WAP to calculate the sum of number from 1 to n using recursion
#include<stdio.h>
int range(int n ){

    if (n==0)
    {
        return 0;
    }
    else
    {
        return n + range(n-1);
    }
    
    

}
int main(){
    int num ;
    printf("Enter number uptil where you want sum :");
    scanf("%d",&num);
    printf("SUM:%d",range(num));

  
    
return 0 ;
}