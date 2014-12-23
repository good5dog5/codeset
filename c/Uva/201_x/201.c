#include<stdio.h>
#include<stdbool.h>
#define MAX 11

bool connect[MAX][MAX];

int main(void)
{
   int dot, line;

   while(scanf("%d %d", &dot, &line) == 2) {

      memset(connect, false, sizeof(connect));

      while(line--) {

         int i, j;
         char dir;

         scanf("%c %d %d", &dir, &i, &j);

         if(dir == 'H')
            connect[i][1+j] = true;
         else
            connect[1+j]
         
      }

   }


  
}

