CC=g++
CFLAGS=-c -Wall -g -I.
OFLAGS=-o

run: virt.o
	$(CC) virt.o

srthh.o: virt.cpp
	$(CC) $(CFLAGS) virt.cpp

clean:
	rm -f *.o run