CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: next5.o
	$(CC) next5.o

next5.o: next5.cpp
	$(CC) $(CFLAGS) next5.cpp

clean:
	rm -f *.o run *.out