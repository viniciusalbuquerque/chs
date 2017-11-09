CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: test1.o
	$(CC) test1.o

test1.o: test1.cpp
	$(CC) $(CFLAGS) test1.cpp

clean:
	rm -f *.o run