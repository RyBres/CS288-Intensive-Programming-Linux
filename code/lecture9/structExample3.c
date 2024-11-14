#include <stdio.h>

struct Date {
   int day;
   int month;
   int year;
};

struct Employee {
   char name[50];
   struct Date joiningDate; // we can use the previous Date struct
};

int main() {
   struct Person person = {"Alice", 25, 5.5};
   
   printf("%s is %d", person.age, person.name);
   
   return 0;
}
