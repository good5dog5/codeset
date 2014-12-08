#include<stdio.h>

enum{
    LEFT_BRACKET, RIGHT_BRACKET, NUMBER, MATCH, NOT_MATCH, EMPTY_TREE
};

static int num;
int getToken(){
    int c = getchar();
    while(c==' '|| c=='\n')
        c = getchar();

    num = 0;
    if (c=='(')
        return LEFT_BRACKET;
    else if (c==')')
        return  RIGHT_BRACKET;
    else if ( (c>='0'&&c<='9')||c=='-' ){
        int sign = 1;
        if (c=='-'){
            sign = -1;
            c = getchar();
        }
        for(; c>='0'&&c<='9'; c=getchar())
            num = num*10 + (c-'0');
        num = num*sign;
        ungetc(c,stdin);
        return NUMBER;
    }
    return 0;
}

int traversal(int sum, int target){
    
    int token; 
    getToken(); 

    token=getToken();
    if (token==RIGHT_BRACKET)
        return  EMPTY_TREE;
    else 
        sum += num;

    int lc = traversal(sum,target);  
    int rc = traversal(sum,target); 

    getToken(); 

    if (lc==EMPTY_TREE && rc==EMPTY_TREE) 
        if (sum==target)
            return MATCH;
    
    if (lc==MATCH || rc==MATCH) 
        return MATCH;
    return NOT_MATCH;
}

int main(){
    int target;

    while (scanf("%d",&target)==1){
        if (traversal(0, target)==MATCH) 
            printf("yes\n");
        else
            printf("no\n");     
    }
    return 0;
}
