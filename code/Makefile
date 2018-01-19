PROG=prog

SRCS=main.c foo.c
OBJS=$(SRCS:.c=.o)

CC=gcc
CFLAGS=-Wall -O2 -g --std=c99 -c

.PHONY: clean all depend

all: $(PROG)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) $(LDFLAGS)

depend: .depend

.depend: $(SRCS)
	$(CC) $(CFLAGS) -MM $^ > ./.depend

-include .depend

clean:
	rm -f $(PROG) $(OBJS) .depend
