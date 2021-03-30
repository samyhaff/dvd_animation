CC=gcc

CXXFLAGS=-lSDL2 -lSDL2_image

all: main
	./main

clean:
	rm -f *.o main

main: main.o draw.o logic.o input.o
	$(CC) $(CXXFLAGS) -o main main.o draw.o logic.o input.o

draw.o: draw.c constants.h
	$(CC) $(CXXFLAGS) -c draw.c

main.o: main.c constants.h draw.h input.h
	$(CC) $(CXXFLAGS) -c main.c

logic.o: constants.h logic.c
	$(CC) $(CXXFLAGS) -c logic.c

input.o: input.c 
	$(CC) $(CXXFLAGS) -c input.c
