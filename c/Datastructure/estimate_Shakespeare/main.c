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
word * search(char * s)
{
   word * start   = head;
   word * current = NULL;

   while(start != NULL )
   {
      current = start;

      if( strcmp(s, start->aword) <= 0 || 
          (start->nPtr != NULL && strcmp(s, start->nPtr->aword) < 0))
         return current;

      start = start->nPtr;
   }
   return current;
}
void print(word * head)
{
   while(head != NULL)
   {
      printf("\n%-40s %5d", head->aword, head->cnt);
      head = head->nPtr;
   }
}
void addWord2(char * str)
{
      word * preWord = NULL;
      word * tmpWord = NULL;

      if(head == NULL) { head = createWordNode(str); return; }

      preWord = search(str);

      if(strcmp(str, preWord->aword) == 0)
      {
         preWord->cnt++;
         return;
      }
      if(preWord == head)
      {
         tmpWord = head;
         head = createWordNode(str);
         head->nPtr = tmpWord;
         return;
      }
      if(preWord->nPtr != NULL)
      {
         tmpWord = preWord->nPtr;
         preWord->nPtr = createWordNode(str);
         preWord->nPtr->nPtr = tmpWord;
         return;
      }
      preWord->nPtr = createWordNode(str);
}

int main(void)
{
   char str[25];
   int cnt = 0;


   while( scanf("%s", str) != EOF)
   {
      //addWord2(str);
      addWord(str);
   }
   print(head);
   puts("\n\n");
   return 0;
}

