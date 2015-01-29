#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char board[9][9];
int  target[9][9] = {0};
int  direct[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0} };
int  oppside[8] = { 4, 5, 6, 7, 0, 1, 2, 3};

void make_move(int x, int y, char player)
{
}
bool isOutBoard(int x, int y)
{
   return ((x > 8 || y > 8) || (x < 1 || y < 1));
}
void list_legal_move(char player)
{
   char opponent = (player == 'W') ? 'B' : 'W';
   int x, y;

   for(x = 1; x <=8; x++) {
      for( y = 1; y <= 8; y++) {

         if( board[x][y] == opponent ) {

            int i;
            for( i = 0; i < 8; i++) {

               int now_x = x + direct[i][0];
               int now_y = y + direct[i][1];
               bool legal = false;

               while(1) {
                  if( isOutBoard(now_x, now_y) || board[now_x][now_y] == '-' ) {
                     break;
                  } 

                  if( board[now_x][now_y] == opponent) {
                     now_x = now_x + direct[i][0];
                     now_y = now_y + direct[i][1];
                     continue;
                  }
                  if( board[now_x][now_y] == player ) {
                     legal = true;
                     break;
                  }
               }
               if(legal) {
                  int legal_x = x + direct[oppside[i]][0];
                  int legal_y = y + direct[oppside[i]][1];
                  target[legal_x][legal_y] = 1;
               }
            }
         }
      }
   }
   for(x = 1; x <=8; x++) {
      for(y = 1; y <= 8; y++) {
         if(target[x][y] == 1)
            printf("(%d, %d) ", x, y);
      }
   }
   printf("\n");
}



int main(void)
{
   char player;
   char option;
   int round = 0;

   scanf("%d", &round);
   while(round--) {

      char c;

      int row = 0, col = 0;
      for(row = 1; row <= 8; row++) {
         for(col = 1; col <= 8; col++) {

            c = getchar();
            if( c == '\n' ) c = getchar();
            board[row][col] = c;
         }
      }
      while((c=getchar()) == '\n' ) continue;
      player = c;
      while((c=getchar()) == '\n' ) continue;
      option = c;

      while(option != 'Q') {
         int x = 0, y = 0;
         
         if(option == 'L')
            list_legal_move(player);

         else {
            scanf("%d %d", &x, &y);
            make_move(x, y, player);
         }
         while((c=getchar()) == '\n' ) continue;
         option = c;
      }



      
   }
   return 0;
   

}
