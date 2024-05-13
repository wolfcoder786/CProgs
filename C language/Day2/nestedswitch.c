#include<stdio.h>
int main(){
  int a ;
  printf("Enter your age:");
  scanf("%d",&a);
  int marks;
  printf("Enter  marks:");
  scanf("%d",&marks);

  switch (a)
  {
  case 3 :
    printf("Your age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks is 45\n");
        break;
    
    default:
       printf("You Scored above 45\n");
        break;
    }
    break;
    case 16:
    printf("Your age is 16\n");
    break;
    case 18:
    printf("Your age is 18\n");
    break;
    case 20:
    printf("Your age is 20\n");
     switch (marks)
    {
    case 45:
        printf("Your marks is 45\n");
        break;
    
    default:
       printf("You Scored above 45");
        break;
    }
    case 66:
    printf("Your age is 66\n");
    switch (marks)
    {
    case 1:
        printf("NO need of exam\n ");
        break;
    
    default:
        break;
    }
    break;
  
  default:
   printf("Nice\n");
    break;
  }
return 0 ;
}