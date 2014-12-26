#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"include/linklist.h"
#include"include/binarytree.h"



int main(void)
{
   char inputStream[25];
   char * str;

   word * head  = NULL;
   tNode * root = NULL;
   numWordNode * numWordroot = NULL;

   while( scanf("%s", inputStream) != EOF)
   {
      str = correctString(inputStream);
      if(strlen(str)==0) continue;
      //addWord2(&head, str);
      root = addtree(root, str);
   }
   numWordroot = traverse(root, numWordroot);
   treeprint(numWordroot);
   //print(head);
   return 0;
}

