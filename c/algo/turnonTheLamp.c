#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 1010
bool is_on[MAX];

int main()
{
   int numPeople, numLamp;

   while(scanf("%d %d", &numLamp, &numPeople) == 2)
   {
      memset(is_on, false, sizeof(is_on));

      for(int i=1; i<=numPeople; i++)
         for(int j=1; j<= numLamp; j++)
            if( j%i == 0 )
               is_on[j] = !is_on[j];

      for(int k=1; k<=numLamp; k++)
         if(is_on[k])
            printf("%d ", k);
      printf("\n");
   }

   return 0;
}
