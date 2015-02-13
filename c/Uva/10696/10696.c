#include<stdio.h>

int f91(int num) 
{
   if(num <= 100) {
      int tmp = f91(num+11);
      return f91(tmp);
   }

   else
      return num - 10;
}
int main(void)
{
   int num = 0;
   while(scanf("%d", &num) && num) {

      printf("f91(%d) = %d\n",num, f91(num));

   }
   return 0;
}
