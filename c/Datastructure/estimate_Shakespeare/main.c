#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct WORD {
   char * aword;
   int cnt;
   struct WORD * nPtr;
};
typedef struct WORD word;
word * head = NULL;


word * createWordNode(char * str)
{
   word * wordNode = NULL;
   wordNode = (word *)malloc(sizeof(word));
   wordNode->aword = (char *)malloc(strlen(str)+1);
   strcpy(wordNode->aword, str);
   wordNode->cnt = 1;
   wordNode->nPtr = NULL;

   return wordNode;
}
void addWord( char * s)
{
   word * wordStart = NULL;
   word * wordEnd   = NULL;

   if(head == NULL)
   {
      head = createWordNode(s);
      return;
   }
   
   wordStart = head;

   while(wordStart != NULL)
   {
      if(strcmp(wordStart->aword, s) == 0)
      {
         wordStart->cnt++;
         return;
      }
      wordEnd = wordStart;
      wordStart = wordStart->nPtr;
   }
   
   wordEnd->nPtr = createWordNode(s);
}
void addWord_v2( char * s)
{
   word * wordStart = NULL;
   word * wordEnd   = NULL;

   if(head == NULL)
   {
      head = createWordNode(s);
      return;
   }
   
   wordStart = head;

   while(wordStart != NULL)
   {
      if(strcmp(wordStart->aword, s) == 0)
      {
         wordStart->cnt++;
         return;
      }
      else if(strcmp(wordStart->aword, s) > 0)
      {
         word * tmp = wordStart->nPtr;
         wordStart = createWordNode(s);
         wordStart->nPtr = tmp;

         return;
      }
      wordEnd = wordStart;
      wordStart = wordStart->nPtr;
   }
   
   wordEnd->nPtr = createWordNode(s);
}
void print(word * head)
{
   while(head != NULL)
   {
      printf("\n%-40s %5d", head->aword, head->cnt);
      head = head->nPtr;
   }
}

int main(void)
{
   char str[25];
   int cnt = 0;

   while( scanf("%s", str) != EOF)
   {
      addWord_v2(str);
   }
   print(head);
   puts("");


   return 0;
}

