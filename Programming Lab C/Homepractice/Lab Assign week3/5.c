#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Input the following in ax^2 + bx + c\n");
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    int dis = ((b*b) - (4*a*c));
    if (dis>0)  
    {
        int root1 = (((-b)+(sqrt(dis)))/2*a);
        printf("root1 : %d",root1);
        int root2 = (((-b)-(sqrt(dis)))/2*a);
        printf("root2 : %d",root2);
    }
    


return 0 ;
}