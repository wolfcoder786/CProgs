// Typecasting 
// (type)value

#include<stdio.h>
int main(){
    int a  = 3 ; 
    // float  b = 54 ;
    // float  b = 54/5; ----1
     float c = (float)54/5;//----> 2
    //  In statement 2 it is defined that the whole c variable is floating datatype hence this time the sol is in decimal 
    // printf("The value of num2 : %d\n",(int)b);
    //printf("The type conversion of b : %f\n",b);
    //statement 1 - C has its type conversion as both 54 and 5 are integers hence its gives the result as integers
    printf("The value of num2 : %f\n",c); 
    
return 0 ;
}