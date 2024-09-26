#include<stdio.h>

int main(){
   int a = 1;
   
   while(a <= 10) {
      printf("%d\n", a);
      if(a == 5)
         goto OUT;
      
      a++;
   }
   OUT:
      printf("We have jumped (goto'd) out of the loop.");
      
}