#include <stdio.h>

int main(void) {
   int num;
   
   printf("Enter a number 1-5: ");
   scanf("%d", &num);
   
   switch(num) {
      case 1:
         puts("You entered 1");
         break;
      case 2:
         puts("You entered 2");
         break;
      case 3:
         puts("You entered 3");
         break;
      case 4:
         puts("You entered 4");
         break;
      case 5:
         puts("You entered 5");
         break;
      default:
         printf("Invalid input");
         // can have break here or not, no diff
   }
   
   return 0;
}