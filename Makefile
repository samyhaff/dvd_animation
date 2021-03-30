CC=gcc

CXXFLAGS=-lSDL2

all: main
	./main

clean:
	rm -f *.o main

main: main.o draw.o
	$(CC) $(CXXFLAGS) -o main main.o draw.o 

draw.o: draw.c constants.h
	$(CC) $(CXXFLAGS) -c draw.c

main.o: main.c constants.h draw.h
	$(CC) $(CXXFLAGS) -c main.c
