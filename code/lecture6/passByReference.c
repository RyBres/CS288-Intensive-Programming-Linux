#include <stdio.h>

void passByReference(int *x) {
   *x = 100; // the * is the pointer to the variable
}

int main() {
   int num = 10;
   
   printf("Before pass by reference %d\n", num);
   passByReference(&num); // the ampersand allows assignment 
   printf("After pass by reference: %d\n", num); // the number is changed to 100.
   
   return 0;
}