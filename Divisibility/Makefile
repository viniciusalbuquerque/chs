CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: div.o
	$(CC) div.o

next3.o: div.cpp
	$(CC) $(CFLAGS) div.cpp

clean:
	rm -f *.o run *.out