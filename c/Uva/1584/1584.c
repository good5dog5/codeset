#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 105
char s[MAX];

bool isLess(const char * s, int pre, int now )
{
   int len = strlen(s);

   for(int i=0; i<len; i++)
      if(s[(now+i)%len] != s[(pre+i)%len])
         return s[(now+i)%len] < s[(pre+i)%len];

   return false;
}


int main(void)
{
   int n;
   scanf("%d", &n);

   while(n--) {

      int len, min = 0;
      scanf("%s", s);
      
      len = strlen(s);
      for(int i=1; i<len; i++)
         if(isLess(s, min, i )) min = i;

      for(int j=0; j<len; j++)
         putchar(s[(j+min)%len]);

      puts("");
   }

   return 0;
}
