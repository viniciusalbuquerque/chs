CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: mp.o
	$(CC) mp.o

test.o: mp.cpp
	$(CC) $(CFLAGS) mp.cpp

clean:
	rm -f *.o *.out run