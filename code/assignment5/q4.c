#include <stdio.h>

/*
   Write a program that inputs three different
   integers from the keyboard, then prints the sum, the average, the product, the smallest, and the
   largest of these numbers. Use only the single-selection form of the if statement you learned in
   this chapter.
*/

int main() {
   int num1, num2, num3, sum, prod, small, large;
   float avg;
   
   printf("Enter three different integers: ");
   scanf("%d %d %d", &num1, &num2, &num3);
   
   sum = num1 + num2 + num3;
   prod = num1 * num2 * num3;
   
   if(num1 > num2 && num1 > num3)
      large = num1;
   if(num2 > num1 && num2 > num3)
      large = num2;
   if(num3 > num1 && num3 > num2)
      large = num3;
      
   if(num1 < num2 && num1 < num3)
      small = num1;
   if(num2 < num1 && num2 < num3)
      small = num2;
   if(num3 < num1 && num3 < num2)
      small = num3;
   
   printf("Sum is %d\n", sum);
   printf("Product is %d\n", prod);
   printf("Smallest is %d\n", small);
   printf("Largest is %d", large);
   
   
   
   
   return 0;
}
