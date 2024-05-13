#include<stdio.h>
int main(){
 int a  ;
 printf("Enter the temperature in Centigrade:");
 scanf("%d",&a);
 int c = (a*1.8)+32;
 printf("The temperature in Fahrenheit:%d",c);
 return 0;

}