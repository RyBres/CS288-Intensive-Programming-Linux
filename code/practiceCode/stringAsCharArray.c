#include <stdio.h>

int main() {
   char buffer[32]; // we can store 32 characters in array named buffer
   
   printf("Type your name: ");
   fgets(buffer, 32, stdin);
   printf("Hello, %s", buffer);
   
   return 0;
}