#include <stdio.h>
#include <math.h>

int main() {
   double investment = 1000.0;
   double rate = 0.05;
   double curr;
   
   for (int year = 1; year <= 10; year++) {
      curr = investment * pow((1 + rate), year);
      
      printf("Current value: $%0.2f\n", curr);
   }

   return 0;
}