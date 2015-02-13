#include<stdio.h>

enum{ B=0, G=1, C=2};

int main(void)
{
   int binColor[][3] = {{B,G,C}, {B,C,G},
                        {G,B,C}, {G,C,B},
                        {C,B,G}, {C,G,B} };

   char pattern[][4] = { "BGC", "BCG", "GBC", "GCB", "CBG", "CGB" };
   int bin[3][3];

   while(scanf("%d%d%d %d%d%d %d%d%d", 
              &bin[0][B], &bin[0][G], &bin[0][C],
              &bin[1][B], &bin[1][G], &bin[1][C],
              &bin[2][B], &bin[2][G], &bin[2][C]) != EOF)
   {
      int totalGlasses = 0;
      int move = 0;
      
      int i = 0;
      for(i=0; i<3; i++)
         totalGlasses += (bin[i][B] + bin[i][G] + bin[i][C]);

      int minMove = totalGlasses;
      int minIdx = 0;

      for(i=0; i<6; i++) {

         move = totalGlasses 
            - bin[0][binColor[i][0]]
            - bin[1][binColor[i][1]]
            - bin[2][binColor[i][2]];

         if(move < minMove) {
            minMove = move;
            minIdx = i;
         }
      }

      printf("%s %d %d\n", pattern[minIdx], minMove, minIdx);
   }
   return 0;

}
