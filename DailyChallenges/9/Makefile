CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: nine.o
	$(CC) nine.o

test.o: nine.cpp
	$(CC) $(CFLAGS) nine.cpp

clean:
	rm -f *.o *.out run