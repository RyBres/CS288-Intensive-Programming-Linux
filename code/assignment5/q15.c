#include <stdio.h>

/*
   Testing if numbers from 1 - 10 are divisible by 2
*/

int checkMultiple();

int main() {
   int terminus = 10, multiple = 2, i = 1, result;
   
   printf("i\tT/F\n");
   while(i <= terminus) {
      (checkMultiple(multiple, i) == 1) ? printf("%d\tT\n") : printf("%d\tF\n");
      i++;
   }
   
   return 0;
}

int checkMultiple(int first, int second) {
   
   return ((second % first) == 0) ? 1 : 0;
   
}