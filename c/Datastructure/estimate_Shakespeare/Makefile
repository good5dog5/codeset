CC = gcc
CFLAGS=-std=c99  -w
OBJS = main.o linklist.o binarytree.o

wordCounter: main.o linklist.o binarytree.o
	${CC}  ${OBJS} ${CFLAGS} -o wordCounter

main.o: main.c 
	${CC} -c main.c  -o main.o ${CFLAGS}

linklist.o: linklist.c 
	${CC} -c linklist.c -o linklist.o ${CFLAGS}

binarytree.o: binarytree.c
	${CC} -c binarytree.c -o binarytree.o ${CFLAGS}


clean:
		rm ${OBJS}
