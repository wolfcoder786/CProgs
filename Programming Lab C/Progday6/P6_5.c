//Wap to print number of days in a month
#include<stdio.h>
int main(){
    printf("For finding number of days follow the below :\n1.January : 1\n2.February : 2\n3.March : 3\n4.April  : 4\n5.May: 5\n6.June  : 6\n7.July  : 7\n8.August  : 8\n9.September  : 9\n10.October  : 10\n11.November  : 11\n12.December : 12\n");
    int num;
    printf("Enter a  number :");
    scanf("%d",&num);
    if (num == 1 ||num == 3 ||num == 5 ||num ==7  ||num == 8||num == 10 ||num == 12   )
    {
        printf("The month has 31 days");
    }
    else if (num == 2)
    {
        printf("The month  February has 28/29 days");
    }
    else
    {
        printf("The month has 30 days");
    }
    
    
return 0 ;
}