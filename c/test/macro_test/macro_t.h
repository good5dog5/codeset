typedef unsigned char byte;

#define MEM_B(x) ( *( (byte *) (x) ) )

#define MAX(x, y) ( ( (x) > (y) )? (x) : (y) ) 
#define MIN(x, y) ( ( (x) < (y) )? (x) : (y) ) 

#define FSIZE(type, field) sizeof( ((type *)0)->field )



