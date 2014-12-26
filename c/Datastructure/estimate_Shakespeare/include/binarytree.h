struct tnode
{
   char * word;
   int count;

   struct tnode * left;
   struct tnode * right;
};
struct numwordnode
{
   int number;

   struct word *  wordlist;
   struct numWordNode * left;
   struct numWordNode * right;
};
struct words
{
   char * word;
   struct word * nextWord;
};

typedef struct tnode tNode;
typedef struct numwordnode numWordNode;
typedef struct words Words;

tNode * addtree(tNode *, char *);
numWordNode * addnumtree(numWordNode *, int, char *);
Words * addWord2list(Words *, char *);
void printWords(const Words*, const int);

numWordNode * traverse(const tNode *, numWordNode *);
void treeprint(const numWordNode *);

tNode * talloc(void);
numWordNode * numwordalloc(void);
Words * wordalloc(void);
char * mstrdup(char *);
