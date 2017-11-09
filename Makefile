CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: repeating_char.o
	$(CC) repeating_char.o

test.o: repeating_char.cpp
	$(CC) $(CFLAGS) repeating_char.cpp

clean:
	rm -f *.o run