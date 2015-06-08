#include<stdio.h>
#include<stdlib.h>
int p[] = {0, -1, 2, 3, 4, 5};
int main(int argc, char ** argv)
{
    int i;
    for (i=0; i<sizeof(p)/4; i++)
        printf("%d ",'p[i]'-'0');

    return 0;
}

