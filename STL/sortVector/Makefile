CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: sort.o
	$(CC) sort.o

test.o: sort.cpp
	$(CC) $(CFLAGS) sort.cpp

clean:
	rm -f *.o run