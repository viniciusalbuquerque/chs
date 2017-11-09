CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: for.o
	$(CC) for.o

srthh.o: for.cpp
	$(CC) $(CFLAGS) for.cpp

clean:
	rm -f *.o run