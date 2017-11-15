CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: sc.o
	$(CC) sc.o

test.o: sc.cpp
	$(CC) $(CFLAGS) sc.cpp

clean:
	rm -f *.o *.out run