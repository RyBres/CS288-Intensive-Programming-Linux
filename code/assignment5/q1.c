#include <stdio.h>

int main() {
   int num1, num2, prod, diff, rem;
   float quo;
   
   
   printf("Please enter the first number (int): ");
   scanf("%d", &num1);
   printf("Please enter the second number (int): ");
   scanf("%d", &num2);
   
   prod = num1 * num2;
   diff = num1 - num2;
   quo = (float) num1 / num2; // typecast to avoid int division
   rem = num1 % num2;
   
   printf("Product: %d\nDifference: %d\nQuotient: %.2f\nRemainder: %d", prod, diff, quo, rem);
   
   return 0;
}