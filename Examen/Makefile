.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = tconvert, countchar1, countchar2, revert, countint, intlist

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)