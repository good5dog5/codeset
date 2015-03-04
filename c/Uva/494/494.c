#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
   char s[1001];
   size_t read;

   while(fgets(s, 1001, stdin))
   {
      int i = 0, cnt = 0, flag = 0;
      int len = strlen(s);

      for(i=0; i<len; i++ ) {

         if(isalpha(s[i]))
            flag = 1;

         else {
            cnt += flag;
            flag = 0;
         }
      }
      cnt += flag;

      printf("%d\n", cnt);
   }
   return 0;
}
