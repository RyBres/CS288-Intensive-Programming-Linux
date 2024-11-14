#include <stdio.h>

char *myname(void) {
   static char me[] = "Ryan"; // static declaration makes variable local to this func but retains value after execution
   return me;
}

int main() {
   printf("My name is %s\n", myname() ); 
   
   return 0;
}