#include <stdio.h>

/*
   What difficulty might prevent you from calculating the
   factorial of 20?
   
   Answer: it might cause an integer overflow, since 20! is a very large number.
*/

int main() {
   int result = 1, n = 1;
   
   printf("n\tn!\n");
   
   while(n <= 5) {
      result = 1;
      
      for (int i = 1; i <= n; i++)
         result *= i;
      
      printf("%d\t%d\n", n, result);
      n++;
   }
   
   return 0;
}
