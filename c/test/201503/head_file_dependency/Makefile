CFLAGS=-g -MMD

SRCS= test.c liba.c libb.c
OBJS = $(patsubst %.c, %.o, $(SRCS))
DEPS = $(patsubst %.o, %.d, $(OBJS))

TARGET=test

$(TARGET): $(OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf *.o *.a *~ $(TARGET) $(OBJS) $(DEPS)

-include $(DEPS)
