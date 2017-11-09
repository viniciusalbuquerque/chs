CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: vsa.o
	$(CC) vsa.o

srthh.o: vsa.cpp
	$(CC) $(CFLAGS) vsa.cpp

clean:
	rm -f *.o run