CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: sstream.o
	$(CC) sstream.o

test.o: sstream.cpp
	$(CC) $(CFLAGS) sstream.cpp

clean:
	rm -f *.o *.out run