#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char target[] = "showText";

void extract(char * s)
{
   int now;
   int len = strlen(s);
   printf("%d\n", len);

//   for(now = 0; now <= len; now++) {
//
//      int found = 1;  
//      if(s[now] == target[0]) {
//
//         for(int i=0; i<=strlen(target); i++)
//            if(s[now+i] != target[i])
//               found = 0;
//      }
//      if(found) {
//         int k;
//         for(k=now; s[k] != ')'; k++)
//            printf("%c", s[k]);
//         printf("%c\n", s[k+1]);
//         now += k+1;
//      }
//   }
}
int main(void)
{
   char  read[150];
   char * num;
   char c;

   do {
      int cnt = 0;
      do {
         c = getchar();
         if(c != EOF) read[cnt++] = (char)c;

      }while( c != EOF || c != '\n');
      read[cnt] = '\0';
      extract(read);
   }while(c != EOF);

   return 0;
}

