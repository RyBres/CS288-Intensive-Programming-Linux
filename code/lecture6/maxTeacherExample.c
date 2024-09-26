#include <stdio.h>

int main() {
   int maximum(int x, int y, int z);
   
   int num1; 
   int num2;
   int num3;
   
   printf("%s", "Enter three numbers");
   scanf("%d%d%d", &num1, &num2, &num3);
   maximum(num1, num2, num3);
   
   return 0;
}