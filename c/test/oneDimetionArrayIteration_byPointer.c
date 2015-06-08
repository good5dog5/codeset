#include<stdio.h>
#include<stdlib.h>

int x[10];
int main(int argc, char ** argv)
{
    int cnt = 0;
    while (cnt++ != 10) {
        *(x+cnt) = cnt * cnt;
    }
    
    return 0;
}

