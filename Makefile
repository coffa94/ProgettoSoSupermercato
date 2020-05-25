CC=gcc
CFLAGS= -std=c99 -Wall -pedantic -g
.PHONY= clean
 
# target:dependencylist
#TAB    rules

all: main

main: main.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -f *~
