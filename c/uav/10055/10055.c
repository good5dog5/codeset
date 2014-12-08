#include<stdio.h>

int main( int argc, char ** argv )
{
   long long int mine = 0, oppo = 0;

   while( scanf( "%lld %lld", &mine, &oppo ) != EOF ) {
      printf("%lld\n", (mine > oppo ) ? mine-oppo : oppo-mine );
   }
   return 0;
}
