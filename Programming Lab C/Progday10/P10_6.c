// 1.WAP to create an integer array to input an array and to display it
#include <stdio.h>
int main()
{
    int i,marks[10];
   for (i = 0; i <= 4; i++)
    {
        printf("Enter %d marks :", i);
        scanf("%d", &marks[i]);
    }
   for ( i = 0; i <= 4; i++)
   {
     printf("Marks %d :%d\n",i,marks[i]);
   }
   

    return 0;
}