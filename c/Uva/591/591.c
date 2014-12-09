#include<stdio.h>
#include<stdlib.h>

int main()
{
   int numWall;
   int wall[64] = {0};
   int count = 1;

   while( scanf("%d", & numWall ) && numWall ) {

      int sum = 0, avg = 0, mov = 0;
      int i;
      for(  i = 0; i < numWall; i++ ) {
         scanf("%d", & wall[i] );
         sum += wall[i];
      }
      avg = sum / numWall;

      for(  i = 0; i < numWall; i++ ) {
         if( wall[i] > avg )
            mov += wall[i] - avg;
      }
      printf("Set #%d\n", count++ );
      printf("The minimum number of moves is %d.\n\n", mov );
   }
}
