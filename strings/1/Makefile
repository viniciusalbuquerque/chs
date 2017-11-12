CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: str1.o
	$(CC) str1.o

test.o: str1.cpp
	$(CC) $(CFLAGS) str1.cpp

clean:
	rm -f *.o *.out run