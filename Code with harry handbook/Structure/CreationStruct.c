#include<stdio.h>
struct Employee
{
    int code ;
    float salary; 
    char name[30];

};

int main(){
struct Employee e1 ,e2 ;
printf("Enter code:");
scanf("%d",&e1.code);
printf("Enter salary:");
scanf("%f",&e1.salary);
printf("Enter name:");
scanf("%s",&e1.name);
printf("Enter code:");
scanf("%d",&e2.code);
printf("Enter salary:");
scanf("%f",&e2.salary);
printf("Enter name:");
scanf("%s",&e2.name);
printf("%d %f %s\n",e1.code,e1.salary,e1.name);
printf("%d %f %s",e2.code,e2.salary,e2.name);
return 0 ;
}