#include <stdio.h>

int gcd();

int main() {
   
   printf("The GCD of 1,234,567,890 and 987,654,321 is %d.", gcd(1234567890, 987654321));
   
   return 0;
}

int gcd(int num1, int num2) {

   return (num1 == 0) ? num2 : gcd(num2 % num1, num1);
   
}