CC = gcc
CFLAGS=-Wall -std=c99
OBJS = main.o linklist.o

wordCounter: main.o linklist.o
	${CC}  ${OBJS} ${CFLAGS} -o wordCounter

main.o: main.c 
	${CC} -c main.c  -o main.o ${CFLAGS}

linklist.o: linklist.c 
	${CC} -c linklist.c -o linklist.o ${CFLAGS}


clean:
		rm ${OBJS}
