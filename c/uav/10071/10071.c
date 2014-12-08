#include<stdio.h>
#include<stdlib.h>

int main( )
{
   int v, t, s;
   while( scanf("%d%d", &v, &t) == 2 ) {
      printf( "%d\n", (v*t) << 1 );
   }
   return 0;
}
