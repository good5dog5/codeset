#include<stdio.h>
#include<stdlib.h>
void f(int n) {

   printf("%d\n", n);
   (1000-n) ? f(n+1) : exit(0);
}

int main(void)
{
   f(1);
   return 0;
}
