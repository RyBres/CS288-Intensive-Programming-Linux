#include <stdio.h>


int main() {
   int days;
   float principle, rate;
   
   printf("Enter loan principal: ");
   scanf("%f", &principle);
   printf("Enter interest rate: ");
   scanf("%f", &rate);
   printf("Enter term of loan in days: ");
   scanf("%d", &days);
   
   printf("The interest charge is: %.2f", ((principle * rate * days) / 365));
   
   
   return 0;
}