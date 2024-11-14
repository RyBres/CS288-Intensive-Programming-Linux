#include <stdio.h>

int power();

int main() {
   
   printf("Result: %d", power(3, 4) );

   return 0;
}

int power(int num, int exponent) {
   
   return (exponent == 1) ? num : num * power(num, exponent - 1);
      
}