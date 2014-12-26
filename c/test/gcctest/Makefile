CC = gcc
CFLAGS = -Wall -g

reciprocal: main.o reciprocal.o
	g++ ${CFLAGS} -o reciprocal main.o reciprocal.o

main.o: main.c reciprocal.hpp
	gcc ${CFLAGS} -c main.c

reciprocal.o: reciprocal.cpp 
	g++ ${CFLAGS} -c reciprocal.cpp

clean:
	rm -f *.o 
