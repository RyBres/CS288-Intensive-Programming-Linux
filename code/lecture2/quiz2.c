#include <stdio.h>

int main() {
    int myInt;
    int result;
    
    printf("Enter an integer to be evaluated: ");
    scanf("%d", &myInt);
    
    result = myInt % 2;
    
    if(result == 0) {
        printf("The integer is even");
    } else {
        printf("The integer is odd");
    }
}