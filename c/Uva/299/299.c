#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y) int tmp = x; x = y; y = tmp;

int main()
{
   int train_num;

   scanf("%d", &train_num);

   for(int i = 0; i < train_num; i++ ) {

      int box_num;
      int box[60] = {0};
      int count = 0;

      scanf("%d", &box_num);

      for(int j = 0; j < box_num; j++) 
         scanf("%d", &box[j]);

      int stop = box_num - 1;
      for(int i = 0; i < stop; i++) {
         for( int j = 0; j < stop-i; j ++  ) {

            if( box[j] > box[j+1] ) {
               SWAP(box[j], box[j+1]);
               count++;
            }
         }

      }
      printf("Optimal train swapping takes %d swaps.\n", count);
   }
   return 0;
}
