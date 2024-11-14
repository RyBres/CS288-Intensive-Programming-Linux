#include <stdio.h>
void cubeByReference( int *nPtr ); // function prototype
int main( void )
 {
   
    int number = 5; // initialize number

    printf( "The original value of number is %d", number );

 // pass address of number to cubeByReference
    cubeByReference( &number );

    printf( "\nThe new value of number is %d\n", number );
 } // end main

// calculate and return cube of integer argument
void cubeByReference( int *nPtr ) // function prototype

// calculate cube of *nPtr; actually modifies number in main
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}