#include <stdio.h>
#include <ctype.h>

int main() {
   char grade;
   int counter = 0, a = 0, b = 0, c = 0, d = 0, f = 0;
   
   printf("Enter the grades (enter/return w/o input to exit): \n");
   
   while(counter < 100) {
      grade = getchar();
      
      if(grade == '\n')
         break;
         
      getchar();
      grade = toupper(grade);
      
      switch(grade) {
         case 'A':
            a++;
            break;
         case 'B':
            b++;
            break;
         case 'C':
            c++;
            break;
         case 'D':
            d++;
            break;
         case 'F':
            f++;
            break;
         default:
            printf("Invalid input. Please try again");
      }
      
      counter++;
   }
   
   printf("Totals for each letter grade are: ");
   printf("\nA: %d", a);
   printf("\nB: %d", b);
   printf("\nC: %d", c);
   printf("\nD: %d", d);
   printf("\nF: %d", f);

   return 0;
}