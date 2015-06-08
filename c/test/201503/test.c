#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
#  When you write a "string" in your source code, it gets written directly into
#  the executable because that value needs to be known at compile time (there
#  are tools available to pull software apart and find all the plain text
#  strings in them). When you write char *a = "This is a string", the location
#  of "This is a string" is in the executable, and the location a points to, is
#  in the executable. The data in the executable image is read-only.  What you
#  need to do (as the other answers have pointed out) is create that memory in a
#  location that is not read only--on the heap, or in the stack frame. If you
#  declare a local array, then space is made on the stack for each element of
#  that array, and the string literal (which is stored in the executable) is
#  copied to that space in the stack.  char a[] = "This is a string"; you can
#  also copy that data manually by allocating some memory on the heap, and then
#  using strcpy() to copy a string literal into that space.  char *a =
#  malloc(256); strcpy(a, "This is a string"); Whenever you allocate space using
#  malloc() remember to call free() when you are finished with it (read: memory
#  leak).  Basically, you have to keep track of where your data is. Whenever you
#  write a string in your source, that string is read only (otherwise you would
#  be potentially changing the behavior of the executable--imagine if you wrote
#  char *a = "hello"; and then changed a[0] to 'c'. Then somewhere else wrote
#  printf("hello");. If you were allowed to change the first character of
#  "hello", and your compiler only stored it once (it should), then
#  printf("hello"); would output cello!)
*/

int main(int argc, char ** argv)
{
    char * ptr1 = "12345e";
    char * ptr2 = "12345";

    printf("ptr1 addr: %X\n", ptr1);
    printf("ptr2 addr: %X\n", ptr2);

    if (ptr1 == ptr2) {
        printf("ptr1 and ptr2 point to same address %X\n", ptr1);
    }


    char * new = malloc(20);
    // char * new1 = "testaaaaaray"); 
    strcpy(new, "testaaaaaarray");
    // strcpy(new1, "testaaaaaarray");
    new[0] = 'c';
    // new1[0] = 'c'; will segment fail
    printf("%s\n", new);
    printf("%X\n", new);
    memset(new, 0, 1);
    printf("%X\n", new);
    printf("%c\n", *(new));

    return 0;
}

