// WAP to find Fahrenheit for a given centigrade temperature.
#include<stdio.h>
int main(){
float a;
printf("Enter temperature in Centigrade:");
scanf("%f",&a);
float b = (1.8*a) + 32;
printf("The temperature in %0.1fC = %0.1fF",a,b);

return 0 ;
}