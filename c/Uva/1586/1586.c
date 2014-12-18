#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 85

char chemi[MAX];
double _C = 12.01;
double _H = 1.008;
double _O = 16.00;
double _N = 14.01;

int main(void)
{
   int n;
   scanf("%d", &n);

   while(n--)
   {
      memset(chemi, 'z', sizeof(chemi));
      scanf("%s", chemi);

      int cnt = 0, sum = 0;
      double weight = 0.00;

      while(chemi[cnt] != '\0') {

         switch(chemi[cnt])
         {
            case 'C':
               cnt++;

               if(isdigit(chemi[cnt])) {

                  sum = chemi[cnt++]-48;
                  while(isdigit(chemi[cnt]))
                     sum = sum*10 + chemi[cnt++]-48;

                  weight += _C * sum; 
                  break;
               }
               else {
                  weight += _C * 1;
                  break;
               }
            case 'H':
               cnt++;

               if(isdigit(chemi[cnt])) {

                  sum = chemi[cnt++]-48;
                  while(isdigit(chemi[cnt]))
                     sum = sum*10 + chemi[cnt++]-48;

                  weight += _H * sum; 
                  break;
               }
               else {
                  weight += _H * 1;
                  break;
               }
            case 'O':
               cnt++;

               if(isdigit(chemi[cnt])) {

                  sum = chemi[cnt++]-48;
                  while(isdigit(chemi[cnt]))
                     sum = sum*10 + chemi[cnt++]-48;

                  weight += _O * sum; 
                  break;
               }
               else {
                  weight += _O * 1;
                  break;
               }
            case 'N':
               cnt++;

               if(isdigit(chemi[cnt])) {

                  sum = chemi[cnt++]-48;
                  while(isdigit(chemi[cnt]))
                     sum = sum*10 + chemi[cnt++]-48;

                  weight += _N * sum; 
                  break;
               }
               else {
                  weight += _N * 1;
                  break;
               }
         }
      }

      printf("%.3f\n", weight);

   }
   return 0;



   return 0;
}
