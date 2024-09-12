#include <stdio.h>
#include <ctype.h>

int main() {
    // Generate square roots for numebs 0 to 10
    int maxNumber = 10;
    
    printf("table of square roots:\n");
    for (int i = 0; i <= maxNumber; ++i) {
        double result = sqrt(i);
        printf("sqrt(%d) = %.21f\n", i, result);
    }
    
    return 0;
}