#include <stdio.h>

int integerPower();

int main() {
   int myResult;
   
   myResult = integerPower(3, 4);
   printf("Result: %d", myResult);

   return 0;
}

int integerPower(int num, int exponent) {
   int result = num;

   for(int i = 1; i < exponent; i++) {
      result *= num;
   }
   
   return result;

}