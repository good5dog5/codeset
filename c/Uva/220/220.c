#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char board[9][9];
int  target[9][9] = {0};
int  direct[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0} };
int  oppside[8] = { 4, 5, 6, 7, 0, 1, 2, 3};

void gen_legal_move(char player)
{
   char opponent = (player == 'W') ? 'B' : 'W';
   int x, y;
   for(x=1; x<=8; x++)
      for(y=1; y<=8; y++)
         target[x][y] = 0;

   for(x = 1; x <=8; x++) {
      for( y = 1; y <= 8; y++) {
         int i;
         for( i = 0; i < 8; i++) {

            int tx = x + direct[i][0];
            int ty = y + direct[i][1];
            bool legal = false;

            while(x >= 1 && x <= 8 && y >= 1 && y <= 8) {
               if( board[tx][ty] == '-' ) 
                  break;

               if( board[no]) {
                  tx = tx + direct[i][0];
                  ty = ty + direct[i][1];
                  continue;
               }
               if( board[tx][ty] == player ) {
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
void list_legal_move(char player)
{
   int x, y, cnt = 0;
   gen_legal_move(player);

   for(x=1; x<=8; x++)
      for(y=1; y<=8; y++)
         if(target[x][y] == 1) {
            printf("(%d,%d) ", x, y);
            cnt++;
         }
   printf("\n");

   if(cnt == 0)
      printf("No legal move.\n");

}
char make_move(int x, int y, char player)
{
again:
   board[x][y] = player;

   int valid = 0, i, j ;

   for(i=0; i<8; i++) {

      int tx = x + direct[i][0];
      int ty = y + direct[i][1];
      int ok = 0;

      while(tx >= 1 && tx <= 8 && ty >= 1 && ty <= 8) {

         if(board[tx][ty] == '-')
            break;

         if(board[tx][ty] == 'W' && player == 'W')
            {ok |= 2; break;}

         if(board[tx][ty] == 'B' && player == 'B')
            {ok |= 2; break;}

         ok |= 1;
         tx += direct[i][0], ty += direct[i][1];
      }

      if(ok == 3) {
         
         valid = 1;
         tx = x + direct[i][0], ty = y + direct[i][1];

         while(tx >= 1 && tx <= 8 && ty >= 1 && ty <= 8) {

            if(board[tx][ty] == '-')
               break;

            if(board[tx][ty] == 'W' && player == 'W')
               break;

            if(board[tx][ty] == 'B' && player == 'B')
               break;

            board[tx][ty] = player;
            tx += direct[i][0], ty += direct[i][1];
         }
      }
   }
   player = (player == 'W') ? 'B' : 'W';
   if( valid == 0) goto again;

   int w_cnt = 0, b_cnt = 0;

   for(i=1; i<= 8; i++) {
      for(j=1; j<=8; j++) {
         if(board[i][j] == 'B') b_cnt++;
         if(board[i][j] == 'W') w_cnt++;
      }
   }

   printf("Black -%3d White -%3d\n", b_cnt, w_cnt);
   return player;
}
void print_board(void)
{
   int x, y;
   
   for(x=1; x<=8; x++, printf("\n")) {
      for(y=1; y<=8; y++) {
         printf("%c", board[x][y]);
      }
   }
   printf("\n");
}



int main(void)
{
   int  round = 0;
   char player;
   scanf("%d", &round);

   while(round--) {
      printf("%d\n", round);

      int cnt;
      char cmd[10];

      for(cnt=1; cnt<=8; cnt++)
         scanf("%s", board[cnt]+1);

      scanf("%s", cmd);
      player = cmd[0];

      while(scanf("%s", cmd) == 1) {
         //printf("%s  ", cmd);
         
         if(cmd[0] == 'L')
            list_legal_move(player);

         if(cmd[0] == 'M') {
            int x = cmd[1] - '0';
            int y = cmd[2] - '0';
            player = make_move(x, y, player);
         }

         if(cmd[0] == 'Q')
            break;
      }
      print_board();
   }
   return 0;
}
