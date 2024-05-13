// WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user.
#include<stdio.h>
int main(){
   float s1,s2,s3,s4,s5,avg,per;
    printf("Enter marks of subject 1:");
    scanf("%f",&s1);
    printf("Enter marks of subject 2:");
    scanf("%f",&s2);
    printf("Enter marks of subject 3:");
    scanf("%f",&s3);
    printf("Enter marks of subject 4:");
    scanf("%f",&s4);
    printf("Enter marks of subject 5:");
    scanf("%f",&s5);
    avg = (s1+s2+s3+s4+s5)/5;
    per = (((s1+s2+s3+s4+s5)/1000)*100);
    printf("Average marks : %0.1f\n",avg);
    printf("Percentage : %0.1f",per);

return 0 ;
}