#include <stdio.h>
#include <string.h>

// some practice code
int main() {
   char str[] = "Program"; // create string (uses array [] because it's just multiple chars, so char type)
   char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}; // list of chars that contains null, so extra element
   
   // the only difference is that a character array and string
   // is that char array must be terminated with \0, or null
   
   // calculate the length of the string w/ strlen function
   size_t length = strlen(str);
   
   printf("The length of '%s': '%zu'\n", str, length);
   
   printf("Length of string b = %zu \n", strlen(b));
   
   return 0;
}