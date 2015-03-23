CC = gcc
CFLAGS = -Wall -std=c99 
LIB = -lm

SRCS = $(wildcard *.c)

.PHONY: clean

all: $(SRCS:.c=)

.c:
	$(CC) $(CFLAGS) $< -o $@ $(LIB)

clean:
	rm -rf $(SRCS:.c=)
