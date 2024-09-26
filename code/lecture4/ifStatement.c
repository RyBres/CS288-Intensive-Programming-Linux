#include <stdio.h>

int main() {
   int myGrade;
   
   printf("Enter your grade: ");
   scanf("%d", myGrade);
   
   // if else
   if (myGrade >= 60) {
      puts("Passed");
   } else {
      puts("Failed");
   }
   
   // else if
   if (myGrade >= 90) {
      puts("A");
   } else if (myGrade >= 80) {
      puts("B");
   } else {
      puts("Less than a B");
   }
   
   return 0;
}