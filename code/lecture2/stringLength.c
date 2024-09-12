/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>



int main() {...
    char str[] = "Program";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}; // last char is NULL
    
    size_t length = strlen(str);
    
    printf("The length of '%s' is '%zu': ", str, length);
    
    printf("Length of string b = %zu", strlen(b));
    
    return 0;
}