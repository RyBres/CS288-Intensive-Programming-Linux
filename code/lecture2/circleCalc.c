/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>



int main() {
	const float pi = 3.14159;
	float radius, diameter, area;

	printf("Enter a radius to get circle info: ");
	scanf("%f", &radius);

	diameter = 2 * pi * radius;
	area = pi * radius * radius;

	printf("Radius: %f\n", radius);
	printf("Diameter: %f\n", diameter);
	printf("Area: %f\n", area);

	return 0;
}