#include<stdio.h>

void foo(void)
{
   int a;
   printf("%d\n", a);
}

void bar(void)
{
   int a = 42;
   printf("%d\n", a);
}
int main(void)
{
   bar();
   foo();

   return 0;
}
