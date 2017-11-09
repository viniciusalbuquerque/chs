CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: srthh.o
	$(CC) srthh.o

srthh.o: srthh.cpp
	$(CC) $(CFLAGS) srthh.cpp

clean:
	rm -f *.o run