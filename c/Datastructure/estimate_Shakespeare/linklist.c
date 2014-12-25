#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"linklist.h"

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
void addWord(word ** head,  char * s)
{
   word * wordStart = NULL;
   word * wordEnd   = NULL;

   if(*head == NULL)
   {
      *head = createWordNode(s);
      return;
   }
   
   wordStart = *head;

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
word * search(word ** head, char * s)
{
   word * start   = *head;
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
void addWord2(word ** head, char * str)
{
      word * preWord = NULL;
      word * tmpWord = NULL;

      if(*head == NULL) { *head = createWordNode(str); return; }

      preWord = search(head, str);

      if(strcmp(str, preWord->aword) == 0)
      {
         preWord->cnt++;
         return;
      }
      if(preWord == *head)
      {
         tmpWord = *head;
         //*head = createWordNode(str);
         //*head->nPtr = tmpWord;

         (*head) = createWordNode(str);
         (*head)->nPtr = tmpWord;
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
char * correctString(const char * str)
{
   char * result = (char *)malloc(strlen(str)+1);
   int i=0, k=0;

   for(i=0; str[i]!='\0'; i++) {
      if((((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z')) || ((str[i]=='\'' || str[i]=='-') && i != 0)))
         result[k++] = tolower(str[i]);
   }
   result[k] = '\0';


   return result;
}
