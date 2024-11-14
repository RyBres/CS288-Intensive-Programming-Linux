
#include <stdio.h>
#include <string.h>
// Define a structure
struct MyStruct {
int integer;
float floating_point;
char character;
};
// Define a union
union MyUnion {
int integer;
float floating_point;
char character;
};
int main() {
// Declare variables of type struct and union
struct MyStruct exampleStruct;
union MyUnion exampleUnion;
// Assign values
exampleStruct.integer = 5;
exampleStruct.floating_point = 3.14;
exampleStruct.character = 'A';
exampleUnion.integer = 5;
exampleUnion.floating_point = 3.14;
exampleUnion.character = 'A';
// Print size of struct and union
printf("Size of struct: %lu bytes\n", sizeof(exampleStruct));
printf("Size of union: %lu bytes\n", sizeof(exampleUnion));
// Show how values are stored in struct
printf("\nValues in struct:\n");
printf("Integer: %d\n", exampleStruct.integer);
printf("Float: %.2f\n", exampleStruct.floating_point);
printf("Character: %c\n", exampleStruct.character);
// Show how values are stored in union
printf("\nValues in union:\n");
printf("Integer: %d\n", exampleUnion.integer);
printf("Float: %.2f\n", exampleUnion.floating_point);
printf("Character: %c\n", exampleUnion.character);
return 0;
}
