#include <stdio.h>

float calculateCharges(float hours);

int main() {
   float hours1 = 1.5, hours2 = 4.0, hours3 = 24.0;
   float charges1 = calculateCharges(hours1), charges2 = calculateCharges(hours2), charges3 = calculateCharges(hours3);
   float sumhours = hours1 + hours2 + hours3;
   float sumcharges = charges1 + charges2 + charges3;
   
   printf("Car\tHours\tCharge\n");
   printf("1\t\t1.5\t%.2f\n", charges1);
   printf("2\t\t4.0\t%.2f\n", charges2);
   printf("3\t\t24.0\t%.2f\n", charges3);
   printf("TOTAL\t%.2f\t%.2f\n", sumhours, sumcharges);
   
   return 0;
}

float calculateCharges(float hours) {
   float charge = 2.00;
   
   charge = (hours <= 3.0) ? charge : charge + 0.50 * (hours - 3.0); 

   return (charge < 10.00) ? charge : 10.00;
}