CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: mms.o
	$(CC) mms.o

test.o: mms.cpp
	$(CC) $(CFLAGS) mms.cpp

clean:
	rm -f *.o *.out run