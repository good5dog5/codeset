#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 1000

bool win, lose;
int  left, chance;
char ans[MAX], gus[MAX];

void guess(char c)
{
   bool bad = true;

   for(int i=0; i<strlen(ans); i++) {

      if(ans[i] == c)
      {
         left--;
         ans[i] = ' ';
         bad = false;
      }
   }
   if(bad) --chance;
   if(!chance) lose = true;
   if(!left)   win  = true;
}
int main()
{
   int rnd;

   while(scanf("%d %s %s", &rnd, ans, gus) == 3 && rnd != -1) {

      printf("Round %d\n", rnd);

      win = lose = false;
      left = strlen(ans);
      chance = 7;

      for(int i=0; i<strlen(gus); i++)
      {
         guess(gus[i]);
         if(win || lose) break;
      }

      if(win) printf("You win.\n");
      else if(lose) printf("You lose.\n");
      else printf("You chickened out.\n");
   }

   return 0;
}
