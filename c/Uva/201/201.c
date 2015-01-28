#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 11

int horizontal_connect[MAX][MAX];
int vertical_connect[MAX][MAX];


int main(void)
{
   int dot = 0, line = 0, start = 0;

   while(scanf("%d %d ", &dot, &line) == 2) {

      memset(horizontal_connect, 0, sizeof(horizontal_connect));
      memset(vertical_connect, 0, sizeof(vertical_connect));

      while(line--) {

         int i = 0, j = 0;
         char dir;

         scanf("%c %d %d ", &dir, &i, &j);


         if(dir == 'H')
            horizontal_connect[i][j] = 1;
         if (dir == 'V') 
            vertical_connect[j][i] = 1;
         
      }
      if(start++) printf("\n**********************************\n\n");
      printf("Problem #%d\n\n", start);

      int row = 0, col = 0, size = 0, sum = 0;

      for(size=1; size <= dot; size++ ) {

         int count = 0, flag = 0;
         for(row = 1; row <= dot; row++) {
            for(col = 1; col <= dot; col++) {

               flag = 1;
               int h = 0,v = 0;

               for(h=col; h < col+size; h++) 
                  if( !horizontal_connect[row][h] || !horizontal_connect[row+size][h] ) flag = 0;
               for(v=row; v < row+size; v++) 
                  if( !vertical_connect[v][col] || !vertical_connect[v][col+size] ) flag = 0;

               count += flag;
            }
         }
         sum += count;
         if(count) printf("%d square (s) of size %d\n", count, size);
         
      }
      if(!sum)
         printf("No completed squares can be found.\n");

   }

   return 0;


  
}

