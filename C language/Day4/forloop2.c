#include<stdio.h>
int main(){
  int i = 0  ;
  for ( ;i < 10; i++) //it is possible that we are not writing expression 1 (i.e i = 0 )
  {
    printf("%d\n",i);
    
  }
  
return 0 ;
}