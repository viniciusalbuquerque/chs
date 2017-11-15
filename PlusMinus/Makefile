CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: pm.o
	$(CC) pm.o

test.o: pm.cpp
	$(CC) $(CFLAGS) pm.cpp

clean:
	rm -f *.o *.out run