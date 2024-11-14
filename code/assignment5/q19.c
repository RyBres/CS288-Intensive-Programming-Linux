#include <stdio.h>
#include <math.h>

/*
   Show the value of x after each of the following statements is performed:
   a) x = fabs (7.5 );
   b) x = floor (7.5);
   c) x = fabs (0.0 );
   d) x = ceil (0.0 );
   e) x = fabs ( -6.4);
   f) x = ceil ( -6.4 );
   g) x = ceil (-fabs( -8 + floor( -5.5 ) ) );
*/

int main() {
   printf("fabs(7.5) = %.1f\n", fabs(7.5));
   
   printf("floor(7.5) = %.1f\n", floor(7.5));
   
   printf("fabs(0.0) = %.1f\n", fabs(0.0));
   
   printf("ceil(0.0) = %.1f\n", ceil(0.0));
   
   printf("fabs(-6.4) = %.1f\n", fabs(-6.4));
   
   printf("ceil(-6.4) = %.1f\n", ceil(-6.4));
   
   printf("ceil(-fabs(-8 + floor(-5.5))) = %.1f\n", ceil(-fabs(-8 + floor(-5.5))));
    
   return 0;
}