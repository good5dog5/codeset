#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int row = 0, col = 0;
int dict[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0} };

bool overMap( int r, int c )
{
   return ( r < 0 || c < 0 ) || ( r > row || c > col );
}

int main()
{
   int  num_of_field = 1;
   bool flag = 0;
   char endl;

   while( scanf("%d%d%c", &row, &col, &endl) ==3 && row && col  ) {

      char map[110][110]; 
      int  idx[110][110] = {0};
      
      int rc, cc; 
      char meta;
      
      for( rc = 0; rc < row; rc++ ) {
         for( cc = 0; cc < col; cc++ ) {
            scanf("%c", &map[rc][cc] );
         }
         meta = getchar();
      }
      for( rc = 0; rc < row; rc++ ) {
         for( cc = 0; cc < col; cc++ ) {
            if( map[rc][cc] == '*') {
               
               int count = 0;

               for( ; count < 8; count++ ) {
                  int neighbor_r = rc + dict[count][0];
                  int neighbor_c = cc + dict[count][1];
                  if( !overMap( neighbor_r, neighbor_c ) ) { 
                     idx[neighbor_r][neighbor_c]++;
                  }
               }
            }
         }
      }

       if( flag ) printf("\n");
       flag = true;

      printf("Field #%d:\n", num_of_field++ );

      for( rc = 0; rc < row; rc++ ) {
         for( cc = 0; cc < col; cc++ ) {

            if( map[rc][cc] == '*' )
               printf("*");
            else 
               printf("%d", idx[rc][cc] );
         }
         printf("\n");
      }
   }
   return 0;
}
