#include<stdio.h>
#include<string.h>
#define MAX 10005

int group[MAX];
int n, k, m;

int main(void)
{
   while(scanf("%d %d %d", &n, &k, &m) == 3) {

      if(!n && !k && !m) break;
      memset(group,0, sizeof(group));

      for(int i=2; i<n; i++)
         group[i] = (group[i-1] + k) % i;

      int ans = (m + group[n-1])%n + 1;
      printf("%d\n", ans);

   }

   return 0;
}
