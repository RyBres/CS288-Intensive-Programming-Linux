#include <stdio.h>

/*
   Write a program that asks the user to enter two integers, obtains the
   numbers from the user, and then prints the larger number followed by the words “is larger.” If the
   numbers are equal, print the message “These numbers are equal.” Use only the single-selection
   form of the if statement you learned in this chapter.
*/

int main() {
   int num1, num2;
   
   printf("Enter the first number (int): ");
   scanf("%d", &num1);
   printf("Enter the second number (int): ");
   scanf("%d", &num2);
   
   // implement single-selection if statement
   if(num1 > num2)
      printf("%d is larger", num1);
   if(num2 > num1)
      printf("%d is larger", num2);
   if(num1 == num2)
      printf("These numbers are equal");

   return 0;
}