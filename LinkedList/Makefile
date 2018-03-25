CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: ll.o
	$(CC) ll.o

test.o: ll.cpp
	$(CC) $(CFLAGS) ll.cpp

clean:
	rm -f *.o *.out run