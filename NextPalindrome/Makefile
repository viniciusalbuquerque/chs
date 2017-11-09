CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: next3.o
	$(CC) next3.o

next3.o: next3.cpp
	$(CC) $(CFLAGS) next3.cpp

clean:
	rm -f *.o run *.out