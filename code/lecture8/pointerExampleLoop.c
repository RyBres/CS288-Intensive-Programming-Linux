#include <stdio.h>

int main() {
   int x[3] = {2, 4, 6};
   printf("%p\n", x);
   printf("%p\n", x+1); // this will get the 2nd element of the array
                         // default would be x[0]'s address. So x = 0 in that default case.
   printf("%p\n", *x); // we can fetch what the pointer pointers to by using the star/asterisk
   
   for(int i = 0; i < 3; i++) {
      printf("%d = %p\n", x[i], &x[i]);
   }
   
   return 0;
}