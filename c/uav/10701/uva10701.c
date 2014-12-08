#include<stdio.h>
#include<stdlib.h>

char pre[52], in[52];

void find( int p1, int p2, int i1, int i2  )
{
   if( p1 > p2 )
      return; 
   //Use count to find the sub-tree root
   int count = i1;
   while( in[count] != pre[p1] ){ count++; }
   
   find( p1+1, p1+count-i1, i1, count-1  );
   find( p1+count-i1+1, p2, count+1, i2 );
   putchar( pre[p1] );
}
int main( int argc, char ** argv )
{
   int n;
   
   scanf( "%d", &n);

   for( int i = 0; i < n; i++ ) {
      int node;
      scanf("%d%s%s", &node, pre, in );
      find( 0, node-1, 0, node-1 );
      printf("\n");
   }
   return 0;
}
