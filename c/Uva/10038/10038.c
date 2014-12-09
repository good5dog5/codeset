#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int compare( const void * a, const void *b )
{
   return ( *(int *) a - *(int *)b );
}
int main( int argc, char ** argv )
{
   int seq[3000] = {0}, chk[3000] = {0};
   int N = 0;
   int isJolly = 1;

   while( scanf("%d", &N) != EOF ) {

      int i = 0, j = 0;

      for( i = 0; i < N; i++ ) {
         scanf("%d", &seq[i]);
      }

      for( i = 1; i < N; i++ ) {
         dif = abs( seq[i] - seq[i-1] );:
      }
   }
   
}
