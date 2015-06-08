#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int dp[5000][2000] = {0};
int main(int argc, char ** argv)
{
    memset(dp, -1, sizeof(dp));
    int i, j = 0;
    for (i = 0; i < 5000; i++) {
        for (j = 0; j < 2000; j++) {
            if (dp[i][j] != -1 ) {
                printf("%d ,%d\n", i, j);
                break;
            }
        }
    }
    printf("%d %d\n", i , j);
    return 0;
}

