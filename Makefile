CC = gcc
FLAG = -Wall -g
.PHONY: all clean
all: my_mat.o main.o connections
connections: main.o my_mat.o
	$(CC) $(FLAG) -o connections main.o my_mat.o
main.o: main.c 
	$(CC) $(FLAG) -c main.c 
my_mat.o: my_mat.c
	$(CC) $(FLAG) -c my_mat.c
clean: 
	rm -f *.o *.out *.h.ghc connections