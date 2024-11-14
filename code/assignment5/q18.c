#include <stdio.h>

unsigned long long int fibonacci();

int main() {
   printf("The 5th fibonacci number is %llu", fibonacci(5));
   return 0;
}

unsigned long long int fibonacci(unsigned int n) {
   
   unsigned long long int num1 = 0, num2 = 1, curr;
   int i = 2;
   
   if(n == 0) 
      return 0;
   if(n == 1) 
      return 1;
      
   n -= 1;
   for(i; i <= n; i++) {
      curr = num1 + num2;
      num1 = num2;
      num2 = curr;
   }
   
   return num2;
   

}