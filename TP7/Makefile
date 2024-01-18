.PHONY: all clean

PROGS=intlist
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< -lm

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s

