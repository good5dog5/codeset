CC = gcc
CFLAGS = -Wall -g
LIB = 

SRCS = $(wildcard *.c)

.PHONY: clean

all: $(SRCS:.c=)

.c:
	$(CC) $(CFLAGS) $< -o $@ 

clean:
	rm -rf $(SRCS:.c=)
