#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NHASH 29989 //use a prime number!
#define MULT 31

struct node
{
   char * word;
   int count;
   struct node * next;
} node;

typedef struct node Node;

Node * bin[NHASH];

unsigned int hash(char *p)
{
   unsigned int h = 0;
   for(; *p; p++)
      h = MULT * h + *p;
   return h % NHASH;
}
void incword(char * s)
{
   Node * p;
   int h = hash(s);
   for(p = bin[h]; p != NULL; p=p->next)
   {
      if(strcmp(s, p->word) == 0)
      {
         (p->count)++;
         return;
      }
   }
      p = (Node *)malloc(sizeof(node));
      if(!p)
         return;

      p->count = 1;
      p->word = (char *)malloc(strlen(s)+1);
      strcpy(p->word, s);
      p->next = NULL;
      bin[h] = p;
   
}
int main(void)
{
   char buf[100];
   for (int i=0; i<NHASH; i++)
      bin[i] = NULL;

   while(scanf("%s", buf) == 1)
      incword(buf);

   for(int i=0; i <NHASH; i++)
      for(Node * p = bin[i]; p != NULL; p = p->next)
         printf("%s %d\n", p->word, p->count);

   return 0;
}
