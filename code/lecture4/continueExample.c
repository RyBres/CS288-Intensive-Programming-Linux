#include <stdio.h>

int main(void) {
   unsigned int x; //counter
   
   for(x = 1; x <= 10; ++x) {
      if (x == 5) {
         continue;
      }
      
      printf("%u ", x);
   }
   
   printf("\nLoop stopped at at x==%u\n");
}