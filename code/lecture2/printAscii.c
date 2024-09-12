/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>



int main() {
    char c;
    
    printf("Enter a character: ");
    c = getchar();
    // or use scanf("%c", &c);
    
    printf("The ASCII for '%c' is '%d'", c, c);
    
    return 0;
}