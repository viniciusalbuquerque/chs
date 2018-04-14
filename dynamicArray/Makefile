CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: dynamic.o
	$(CC) dynamic.o

dynamic.o: dynamic.cpp
	$(CC) $(CFLAGS) dynamic.cpp

clean:
	rm -f *.o run