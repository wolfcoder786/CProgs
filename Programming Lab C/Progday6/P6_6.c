//WAP to check whether a triangle is valid or not if the sides are given
#include<stdio.h>
int main(){
    int a , b ,c ;
    printf("Enter side1 :");
    scanf("%d",&a);
    printf("Enter side2 :");
    scanf("%d",&b);
    printf("Enter side3 :");
    scanf("%d",&c);
    int sum1 = a + b ;
    int sum2 = b +c;
    int sum3 = c + a ;
    if (sum1>c)
    {
        if (sum2>a)
        {
            if (sum3>b)
            {
                printf("Triangle is valid");
            }
            else
            {
                printf("Triangle is not valid");
            }
            
        }
        else
            {
                printf("Triangle is not valid");
            }
    }
    else
    {
        printf("Triangle is not valid");
    }

return 0 ;
}