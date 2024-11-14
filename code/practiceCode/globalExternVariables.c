#include <stdio.h>

int a, b;

void sum(void) {
   extern int a, b; // extern directs the compiler to look outside the function for a and b values
   
   a = 91;
   b = 7;
   printf("%d + %d = %d\n", a, b, a + b);
}

int main() [
   extern int a, b;
   
   puts("Calling sum()");
   
   return 0;
}