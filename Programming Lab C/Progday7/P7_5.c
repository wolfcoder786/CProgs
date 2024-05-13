//WAP to find the roots of a quadratic roots
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
    switch (dis>0)
    {
    case 1:
    int root1 = (((-b)+(sqrt(dis)))/2*a);
    printf("root1 : %d\n",root1);
    int root2 = (((-b)-(sqrt(dis)))/2*a);
    printf("root2 : %d",root2);
    break;
    case 0 :
        switch (dis = 0)
        {
            case  1 :
            int root1 = (-b)/2*a;
            printf("Root1 = Root2 = %d",root1);
            break;
        }
    
    
    default:
       printf("The roots are imaginary");
       break;
    }
   
    


return 0 ;
}