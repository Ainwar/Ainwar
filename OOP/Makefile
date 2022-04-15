EXEC = square
CC = gcc
CFLAGS = -Wall -std=cll
LDLIBS = -lm

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
DEPO = $(patsubst %.c, %.d, $(SRCS))

.PHONY: clean

$(EXEC): $(OBJS)

-include $(DEPS)

clean:
	rm $(OBJS) $(EXEC)