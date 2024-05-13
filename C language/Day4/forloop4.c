#include<stdio.h>
int main(){
  int i, j  ;
  for ( i = 0 , j = 0 ;i < 10; i++) //it is possible that we are not writing expression 1 (i.e i = 0 )
  {
    printf("%d%d\n",i,j);
    
  }
  
return 0 ;
}