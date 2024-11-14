#include <stdio.h>

int main() {
   int x[3] = {2, 4, 6};
   
   for(int i = 0; i < 3; i++) {
      printf("%d = %p\n", x+i, *(x+i)); // this time, we show the address and the value stored at that address
   }
   
   return 0;
}