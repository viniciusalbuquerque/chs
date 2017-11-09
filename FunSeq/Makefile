CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: funseq3.o
	$(CC) funseq3.o

next3.o: funseq3.cpp
	$(CC) $(CFLAGS) funseq3.cpp

clean:
	rm -f *.o run *.out