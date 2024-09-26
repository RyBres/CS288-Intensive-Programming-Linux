#include <stdio.h>
#include <math.h>

int main() {
   // Generate the terminal number for loop (square root)
   int maxNumber = 10;
   
   printf("Table of square roots:\n");
   for (int i = 0; i <= maxNumber; ++i) {
      double result = sqrt(i);
      printf("sqrt(%d) = %.21f\n", i, result);
   }
   
   return 0;
}