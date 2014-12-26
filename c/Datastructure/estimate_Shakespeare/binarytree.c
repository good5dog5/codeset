#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"include/binarytree.h"

char * mstrdup(char * s)
{
   char * p = (char *) malloc(strlen(s)+1);
   if(p != NULL) strcpy(p, s);

   return p;
}
tNode * talloc(void)
{
   return (tNode *)malloc(sizeof(tNode));
}
numWordNode * numwordalloc(void)
{
   return (numWordNode *)malloc(sizeof(numWordNode));
}
Words * wordalloc(void)
{

   return (Words *)malloc(sizeof(Words));
}
tNode * addtree(tNode * p, char * w)
{
   int cond;

   if(p == NULL) {
      p = talloc();
      p->word = mstrdup(w);
      p->count = 1;
      p->left = p->right = NULL;
   }
   else if((cond = strcmp(w, p->word)) == 0)
      p->count++;
   else if(cond < 0)
      p->left = addtree(p->left, w);
   else
      p->right = addtree(p->right, w);

   return p;

}
numWordNode * addnumtree(numWordNode * p, int count, char * w)
{
   if(p == NULL) {
      p = numwordalloc();
      p->number = count;
      p->wordlist = NULL;
      p->wordlist = addWord2list(p->wordlist, w);
   }
   else if(count < p->number)
      p->left = addnumtree(p->left, count, w);
   else
      p->right = addnumtree(p->right, count, w);

   return p;
}
Words * addWord2list(Words * list, char * w)
{
   if(list == NULL ) {
      list = wordalloc();
      list->word = mstrdup(w);
      list->nextWord = NULL;
   }
   else 
      list->nextWord = addWord2list(list->nextWord, w);
   return list;
}
void treeprint(const numWordNode * p)
{
   if(p != NULL)
   {
      treeprint(p->left);
      printWords(p->wordlist, p->number);
      treeprint(p->right);
   }
}
void printWords(const Words * w, const int count)
{
   if(w != NULL )
   {
      printf("%-15s %-5d\n", w->word, count);
      w = w->nextWord;
   }
}
numWordNode * traverse(const tNode *p, numWordNode * q)
{
   if(p != NULL)
   {
      q = traverse(p->left, q);
      q = addnumtree(q, p->count, p->word);
      q = traverse(p->right, q);
   }

   return q;
}

