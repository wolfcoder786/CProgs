#include<stdio.h>
#include<string.h>
struct Employee
{
    int code ;
    int salary ;
    char name[30];

};
void show(struct Employee e){
    printf("Code:%d\nSalary:%d\nName:%s",e.code,e.salary,e.name);
}

int main(){
struct Employee e1 ;
e1.code = 7129837 ;
e1.salary = 81273123;
strcpy(e1.name,"Rashmi");
show(e1);

return 0 ;
}