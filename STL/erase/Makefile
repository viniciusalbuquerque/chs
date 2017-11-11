CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: erase.o
	$(CC) erase.o

test.o: erase.cpp
	$(CC) $(CFLAGS) erase.cpp

clean:
	rm -f *.o run