#include <stdio.h>

struct Person{
   char name[50];
   int age;
   float height;
};

int main() {
   struct Person person[2] = {
      {"Alice", 25, 5.5},
      {"Bob", 30, 6.0}
   };
   
   printf("%s is %d", person[0].name, person[0].age);
   printf("\nSize of person struct is %zu", sizeof(person) / sizeof(person[0])); // unrelated but we can get the length of struct array by divided bitesize of entire struct by single element
   
   return 0;
}
