#include<stdio.h>
#include<stdlib.h>

int main( int argc, char ** argv )
{
   int size;
   int matrix[100][100] = {0};

   while( scanf("%d", &size) == 1 ) {
      int i = 0;
      for( ;i < size*size;i++ ) 
         scanf("%d", &matrix[i/size][i%size] );
   }
}
