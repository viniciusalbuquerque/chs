CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: ccb.o
	$(CC) ccb.o

test.o: ccb.cpp
	$(CC) $(CFLAGS) ccb.cpp

clean:
	rm -f *.o *.out run