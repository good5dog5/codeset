#include<stdio.h>
#include<stdlib.h>

int dp[5001][2000] = {0};

void init()
{
    dp[1][0] = 1;
    int a = 0, b = 0;

    for (a = 2; a <= 5000; a++) {
        for (b = 0; b < 2000; b++) {

            dp[a][b]   += dp[a-1][b] + dp[a-2][b];
            dp[a][b+1] += dp[a][b]/10;
            dp[a][b]   %= 10;
        }
    }
}
int main(void)
{
    int num;

    init();
    while(scanf("%d", &num) != EOF) {

        int i;
        printf( "The Fibonacci number for %d is ", num );

        for (i = 1999; i >= 0; i--) {
            if (dp[num][i] != 0)
                break;
        }
        if(i == -1)
            printf("0");
        else
            for(; i >=0; i--) 
                printf("%d", dp[num][i]);
        printf("\n");
    }
    return 0;
}


