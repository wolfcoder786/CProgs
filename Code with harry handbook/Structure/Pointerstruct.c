#include<stdio.h>
struct Employee
{
    int code ;
    float salary; 
    char name[30];

};

int main(){
struct Employee e1 ;
struct Employee *ptr ;
ptr = &e1;
e1.code = 12738;
printf("%d",(*ptr).code);

return 0 ;
}