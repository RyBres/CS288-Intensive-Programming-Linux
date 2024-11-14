#include <stdio.h>

int main() {
   int curr = 2, total = 0;
   
   while(curr <= 30) {
      total += curr;
      curr += 2;
   }
   
   printf("The sum of the even integers from 2 to 30 is %d", total);
   
   return 0;
}