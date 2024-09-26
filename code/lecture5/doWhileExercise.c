#include <stdio.h>

int main() {
   int c = 1;
   
   do {
      printf("Here's a number that will be printed when c <= 2: %u\n", c);
   } while (++c<=2); // you increment while also imposing the logical condition on the do-while loop. intradasting.
   
   return 0;
}