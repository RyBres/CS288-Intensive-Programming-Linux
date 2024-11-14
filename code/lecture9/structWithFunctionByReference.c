#include <stdio.h>

struct Person {
   char name[50];
   int age;
   float height;
};

void updateAge(struct Person *p, int newAge) {
   p->age = newAge; //since p is a pointer we use p-> to point to that person's age
}

int main() {
   struct Person person1 = {"Ryan", 26, 6.05};
   
   printf("Before update: %s is %d years old\n", person1.name, person1.age); //we can also do person1->name or age, it's the same thing
   
   updateAge(&person1, 30); // we pass the address of person1 to p, where we then access age element of p
   
   printf("After update: %s is now %d years old\n", person1.name, person1.age);
   
   return 0;
}