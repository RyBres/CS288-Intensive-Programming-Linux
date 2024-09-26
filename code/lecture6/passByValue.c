#include <stdio.h>

void passByValue(int x) {
   x = 100;
}

int main() {
   int num = 10;
   
   printf("Before pass by value %d\n", num);
   passByValue(num);
   printf("After pass by value: %d\n", num); // the number is still 10.
   
   return 0;
}