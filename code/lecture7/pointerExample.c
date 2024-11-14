#include <stdio.h>

int main() {
   int x = 5;
   int *ptrx = &x;
   
   printf("%d\n", *ptrx); // x's value
   printf("%d\n", ptrx); // the actual address in memory of x
   
   // Let's reassign 6 to x using the pointer
   *ptrx = 6;
   printf("%d", *ptrx); // new x's value
   
   return 0;
}