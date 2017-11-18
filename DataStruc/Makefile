CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: arr.o
	$(CC) arr.o

test.o: arr.cpp
	$(CC) $(CFLAGS) arr.cpp

clean:
	rm -f *.o *.out run