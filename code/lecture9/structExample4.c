#include <stdio.h>

struct Person{
   char name[50];
   int age;
   float height;
};

void printPersonByValue(struct Person p) {
   printf("%d is %s", p.age, p.name);
}

int main() {
   struct Person person = {"Alice", 25, 5.5};
   
   printPersonByValue(person);
   
   return 0;
}
