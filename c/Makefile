CC = gcc
CFLAGS = -g -Wall -std=c99

testpid: testpid.o
	$(CC) -o testpid $(CFLAGS) testpid.c
struct_and_pointer: struct_and_pointer.o
	$(CC) -o struct_and_pointer $(CFLAGS) struct_and_pointer.c
hello-std-out: hello-std-out 	
	$(CC) -o hello-std-out $(CFLAGS) hello-std-out.c

clean:
	find ./ -type f -not -name "*.c" | grep -v Makefile | xargs -i rm {}
