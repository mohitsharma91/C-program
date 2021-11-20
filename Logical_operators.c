#include <stdio.h>

int main() {
   int a = 1;
   int b = 0;

   if ( a && b ) {
	
      printf("This will never print because condition is false\n" );
   }
   if ( a || b ) {
	
      printf("This will be printed print because condition is true\n" );
   }
   if ( !(a && b) ) {
	
      printf("This will be printed print because condition is true\n" );
   }
}