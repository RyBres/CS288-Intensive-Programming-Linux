#include <stdio.h>

struct Person{
   char name[50];
   int age;
   float height;
};

int main() {
   struct Person person = {"Alice", 25, 5.5};
   
   printf("%s is %d", person.name, person.age);
   
   return 0;
}
