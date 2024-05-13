#include<stdio.h>
int main(){
    int class ;
    printf("Enter class :");
    scanf("%d",&class);
    int sub;
    printf("Enter the number of subject failed in:");
    scanf("%d",&sub);
    switch (class)
    {
    case 1:
        if (sub>3)
        {
            printf("NO grace marks");
        }
        else if (sub<=3)    
        {
            printf("Grace marks awarded is 5 marks per subject ");
            
        }
    break;
    case 2:
        if (sub>2)
        {
            printf("NO grace marks");
        }
        else if (sub<=2)    
        {
            printf("Grace marks awarded is 5 marks per subject ");

        }
    break;
    case 3:
        if (sub>1)
        {
            printf("NO grace marks");
        }
        else if (sub<=1)    
        {
            printf("Grace marks awarded is 5 marks per subject ");

        }
        
    break;
    
    default:
       printf("invalid");
        break;
    }
return 0 ;
}