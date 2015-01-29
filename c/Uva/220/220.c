#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char board[9][9];
int  target[9][9] = {0};
int  direct[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0} };
int  oppside[8] = { 4, 5, 6, 7, 0, 1, 2, 3};

bool isOutBoard(int x, int y)
{
   return ((x > 8 || y > 8) || (x < 1 || y < 1));
}
void gen_legal_move(char player)
{
   char opponent = (player == 'W') ? 'B' : 'W';
   int x, y;
   for(x=1; x<=8; x++)
      for(y=1; y<=8; y++)
         target[x][y] = 0;

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
}
void list_legal_move(char player)
{
   int x, y;
   gen_legal_move(player);

   for(x=1; x<=8; x++)
      for(y=1; y<=8; y++)
         if(target[x][y] == 1)
            printf("(%d,%d) ", x, y);

   printf("\n");
}
char make_move(int x, int y, char player)
{
   gen_legal_move(player);
   
/*   int a,b;
   for(a=1; a<=8; a++) {
      for(b=1; b<=8; b++) {
         printf("%d",target[a][b]);
      }
      printf("\n");
   }
   printf("\n");
   printf("%d %d\n", x, y );
*/   
   

   char opponent = (player=='W') ? 'B' : 'W';
   char next;
   
   if(target[x][y] == 0) {
      printf("Player %c no legal move, change to %c\n", player, opponent );
      board[x][y] = opponent;
      next = player;
   }
   else {

      board[x][y] = player;
      next = opponent;
   }

   int i, j, W_cnt = 0, B_cnt= 0;

   for(i=1; i<=8; i++) 
      for(j=1; j<=8; j++) 
      {
         if(board[i][j] == 'W') W_cnt++;
         else if (board[i][j] == 'B') B_cnt++;
      }
   printf("Black - %d White - %d\n", B_cnt, W_cnt);

   return next;
}
void print_board(void)
{
   int x, y;
   
   for(x=1; x<=8; x++) {
      for(y=1; y<=8; y++) {
         printf("%c", board[x][y]);
      }
      printf("\n");
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

      char c, d;

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

            c = getchar();
            d = getchar();
            x = c - 48;
            y = d - 48;
            
            player = make_move(x, y, player);
         }
         while((c=getchar()) == '\n' ) continue;
         option = c;
      }
      print_board();
   }
   return 0;
}
