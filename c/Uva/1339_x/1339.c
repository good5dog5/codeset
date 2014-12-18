#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


int cmp( const void * a, const void * b )
{
   return *(int *)a - *(int *)b;
}
bool is_same(const char * s1, const char * s2)
{
   int len = strlen(s1);

   int a_cnt[26], b_cnt[26];

   memset(a_cnt, 0, sizeof(a_cnt));
   memset(b_cnt, 0, sizeof(b_cnt));

   for(int i=0; i<len; i++) {
      a_cnt[s1[i] -'A']++;
      b_cnt[s2[i] -'A']++;
   }

   qsort(a_cnt, 26, sizeof(int), cmp);
   qsort(b_cnt, 26, sizeof(int), cmp);

   return !memcmp(a_cnt, b_cnt, sizeof(a_cnt)) ? true : false;
}
int main()
{
   char a[300], b[300];

   while(~scanf("%s %s", a, b)) {

      printf("%s\n", is_same(a, b) ? "Yes" : "No");
   }
   return 0;
}
