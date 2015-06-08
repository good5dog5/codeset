#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000

long long * p[MAX];
void init(void)
{
    int i = 1;
    for (; i<MAX; i++) {
        p[i] = malloc(sizeof(long long) * MAX );
        memset(p[i], 0, sizeof(long long) * MAX);
    }

}
void pascalTriangle(void)
{
    int row, col;

    for (row=1; row<MAX; row++) {
        for (col=0; col<row; col++) {

            if (col==0) {

                p[row][col] = 1;
                continue;
            }
            p[row][col] = p[row-1][col-1] + p[row-1][col];
        }
    }
}
void show(void)
{
    int row, col;

    for (row=1; row<MAX; row++) {
        for (col=0; col<row; col++) {

            printf("%lld ", p[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char ** argv)
{
    init();
    pascalTriangle();
    show();
    return 0;
}

