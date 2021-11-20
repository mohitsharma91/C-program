#include <stdio.h>

int main() {
   int a, b;
   
   a = 10;
   b = 20;
   
   /* Here we check whether a is equal to 10 or not */
   if( a == 10 ) {
	   
      /* if a is equal to 10 then this body will be executed */
      printf( "a is equal to 10\n");
   }
   
   /* Here we check whether b is equal to 10 or not */
   if( b == 10 ) {
	
      /* if b is equal to 10 then this body will be executed */
      printf( "b is equal to 10\n");
   }
   
   /* Here we check if a is less b than or not */
   if( a < b ) {
	
      /* if a is less than b then this body will be executed */
      printf( "a is less than b\n");
   }
   
   /* Here we check whether a and b are not equal */
   if( a != b ) {
	
      /* if a is not equal to b then this body will be executed */
      printf( "a is not equal to b\n");
   }
}