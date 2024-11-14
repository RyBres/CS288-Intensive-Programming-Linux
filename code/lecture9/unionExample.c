#include <stdio.h>
union student {
   int i;
   float f;
};

int main() {
  union student s1;
  
  // Assign an int value to the union
  s1.i = 10;
  printf("Integer value: %d", s1.i);
  
  // Assign a float value to the union
  s1.f = 3.14;
  printf("\nFloat value: %f", s1.f);
  
  return 0;
}