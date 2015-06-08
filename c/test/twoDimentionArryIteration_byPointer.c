#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int test[SIZE][SIZE];
int main(int argc, char ** argv)
{
    int cnt = 0;
    while(cnt <= SIZE * SIZE) {
        //int * ptr = *(test)+cnt;
        *(*(test)+cnt) = cnt++;
    }
    printf("\n");

    int i, j;
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            printf("%d ", test[i][j]);
        } 
        printf("\n");
    }
    return 0;
}

