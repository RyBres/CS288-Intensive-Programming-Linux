#include <stdio.h>

int main() {
   int myNum;
   int maximum(int x, int y, int z); // you need to declare the function prior to using it.
   int num1, num2, num3;
   
   printf("Please enter 3 whole numbers: ");
   scanf("%d%d%d", &num1, &num2, &num3);
   
   myNum = maximum(num1, num2, num3);
   
   printf("The max number: %d", myNum);
   
   return 0;
}

int maximum(int x, int y, int z) {
   int max;
   
   if(x > y && x > z) {
      max = x;
   } else if (y > x && y > z) {
      max = y;
   } else if (z > x && z > y) {
      max = z;
   } else {
      printf("Error: There is no maximum.");
      return -1;
   }
   
   return max;
}
