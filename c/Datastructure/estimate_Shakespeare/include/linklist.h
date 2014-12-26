
struct WORD {
   char * aword;
   int cnt;
   struct WORD * nPtr;
};
typedef struct WORD word;

word * createWordNode(char * str);
void addWord(word ** head, char * s);
word * search(word ** head, char * s);
void print(word * head);
void addWord2(word ** head, char * str);
char * correctString(const char * str);
char * testifok(char * at);
