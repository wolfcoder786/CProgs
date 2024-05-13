/*WAP to display the grade system of KIIT University based on total marks secured by a student in a 
semester. Assume marks are integer values. Use multiple if-else statement. 
The grade is calculated is as follows: */
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the total marks:");
    scanf("%d",&marks);
    if (100>=marks && 90<=marks)
    {
        printf("The grade you have secured is O ");
    }
    else if (89>=marks && 80<=marks)
    {
        printf("The grade you have secured is E ");
    }
    else if (79>=marks && 70<=marks)
    {
        printf("The grade you have secured is A");
    }
    else if (69>=marks && 60<=marks)
    {
        printf("The grade you have secured is  B");
    }
    else if (59>=marks && 50<=marks)
    {
        printf("The grade you have secured is C ");
    }
    else if (49>=marks && 40<=marks)
    {
        printf("The grade you have secured is  D");
    }
    else
    {
        printf("The grade you have secured is F");
    }
    
    
return 0 ;
}