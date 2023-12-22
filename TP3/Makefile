.PHONY: all clean

PROGS=game
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s
