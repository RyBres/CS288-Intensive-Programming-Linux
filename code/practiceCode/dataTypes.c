#include <stdio.h>

int main() {
   char c;
   int i;
   float f;
   double d;
   
   /* input */
   printf("Type a character: ");
   scanf("%c", &c);
   printf("Type an integer: ");
   scanf("%d", &i);
   printf("Type a small value: ");
   scanf("%f", &f);
   printf("Type a large value: ");
   scanf("%lg", &d);
   
   /* output */
   printf("\nCharacter: %c\n", c);
   printf("\nInteger: %d\n", i);
   printf("\nSingle-precision: %f\n", f);
   printf("\nDouble-precision: %lg\n", d);
   
   return 0;
}