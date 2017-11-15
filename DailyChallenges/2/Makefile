CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: ch2.o
	$(CC) ch2.o

test.o: ch2.cpp
	$(CC) $(CFLAGS) ch2.cpp

clean:
	rm -f *.o *.out run