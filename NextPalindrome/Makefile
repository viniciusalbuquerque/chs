CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: next4.o
	$(CC) next4.o

next4.o: next4.cpp
	$(CC) $(CFLAGS) next4.cpp

clean:
	rm -f *.o run *.out