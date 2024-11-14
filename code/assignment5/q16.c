#include <stdio.h>

int evenOrOdd();

int main() {
   int terminus = 10, i = 1;
   
   printf("i\tEven/Odd\n");
   
   while(i <= terminus) {
      
      (evenOrOdd(i) == 1) ? printf("%d\tEven\n", i) : printf("%d\tOdd\n", i);

      i++;
   }
   
   return 0;
}

int evenOrOdd(int num) {
   
   return (num % 2 == 0) ? 1 : 0;
   
}