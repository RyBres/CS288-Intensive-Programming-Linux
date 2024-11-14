#include <stdio.h>

int main() {
   int input, curr, rem, result = 0, div = 1, prodInc = 10000, remInc = 10, prevRem = 0, n = 0;
   
   printf("Enter a five-digit integer: ");
   scanf("%d", &input);
   
   while(n < 5) {
      rem = input % remInc;
      curr = ((rem - prevRem) / div) * prodInc;
      result += curr;
      div *= 10;
      remInc *= 10;
      prodInc /= 10;
      prevRem = rem;
      n++;
   }
   
   (result == input) ? printf("The number is a palindrome.") : printf("The number is NOT a palindrome.");
   
   return 0;
}