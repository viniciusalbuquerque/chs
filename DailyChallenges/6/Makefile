CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: six.o
	$(CC) six.o

test.o: six.cpp
	$(CC) $(CFLAGS) six.cpp

clean:
	rm -f *.o *.out run