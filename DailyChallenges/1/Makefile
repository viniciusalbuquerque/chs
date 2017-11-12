CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: ch1.o
	$(CC) ch1.o

test.o: ch1.cpp
	$(CC) $(CFLAGS) ch1.cpp

clean:
	rm -f *.o *.out run