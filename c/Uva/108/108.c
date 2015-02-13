#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int size;
int matrix[105][105] = {0};
int sumTable[105][105] = {0};

int subMatrixSum(int subTable[][105], int x1, int y1, int x2, int y2)
{
   int sum = sumTable[x2][y2] -
             sumTable[x1-1][y2] -
             sumTable[x2][y1-1] +
             sumTable[x1-1][y1-1];

   return sum;
}
int main(void)
{

   while( scanf("%d", &size) == 1 ) {

      int i = 0, j = 0, value = 0;

      memset(sumTable, 0, sizeof(sumTable));

      for(i=1; i<=size; i++) {
         for(j=1; j<=size; j++) {

            scanf("%d", &value);
            sumTable[i][j] = sumTable[i-1][j] +
                             sumTable[i][j-1] -
                             sumTable[i-1][j-1] +
                             value;
         }
      }

      int max = INT_MIN;
      int x1, y1, x2, y2;

      for(x1=1; x1<=size; x1++) {
         for(y1=1; y1<=size; y1++) {

            for(x2=x1; x2<=size; x2++) {
               for(y2=y1; y2<=size; y2++) {

                  int sum = subMatrixSum(sumTable, x1, y1, x2, y2);
                  if(sum > max) {

                     max = sum;
                  } 
               }
            }
         }
      }
      printf("%d\n", max);
   }
   return 0;

}
