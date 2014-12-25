#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linklist.h"



int main(void)
{
   char inputStream[25];
   char * str;

   word * head = NULL;

   while( scanf("%s", inputStream) != EOF)
   {
      str = correctString(inputStream);
      if(strlen(str)==0) continue;
      addWord2(&head, str);

   }
   print(head);
   return 0;
}

