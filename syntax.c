#include <stdio.h>

int main() {
   short  s;
   int    i;
   long   l;
   float  f;
   double d;

   s = 10;
   i = 1000;
   l = 1000000;
   f = 230.47;
   d = 30949.374;

   printf( "s: %d\n", s);
   printf( "i: %d\n", i);
   printf( "l: %ld\n", l);
   printf( "f: %.3f\n", f);
   printf( "d: %.3f\n", d);
}