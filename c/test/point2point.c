#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int *** ppp;
   int ** ipp1;
   int ** ipp2;
   int * ip1;
   int * ip2;
   int * ip3;
   int a=5, b=6;

   ip1 = &a;
   ip2 = &b;

   ipp1 = ip1;
   ip3 = ip1;
   ipp2 = &ip2;
   ppp = &ipp2;

   
   printf("addr[a]: %p addr[b]: %p\n", &a, &b );
   //printf("%d %d\n", *ipp1, **ipp2);
   printf("%d\n", *ip3);

   return 0;
}
