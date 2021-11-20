#include <stdio.h>

int main() {
   int a, b, c;
   
   a = 10;
   b = 20;
   
   c = a + b;   
   printf( "Value of c = %d\n", c);
   
   c = a - b;   
   printf( "Value of c = %d\n", c);
   
   c = a * b;   
   printf( "Value of c = %d\n", c);
   
   c = b / a;   
   printf( "Value of c = %d\n", c);
   
   c = b % a;   
   printf( "Value of c = %d\n", c);
}