#include <stdio.h>

/*
   Recursive question 11
*/

int factorial();

int main() {
   int result, n = 5;
   
   printf("n\tn!\n");
   
   while(n > 0) {
      result = factorial(n);
      
      printf("%d\t%d\n", n, result);
      n--;
   }
   
   return 0;
}

int factorial(int n) {
   
   if(n == 1)
      return 1;
   else
      return n * factorial(n - 1);;
   
}