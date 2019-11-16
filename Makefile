# Makefile

CC=gcc # use gcc compiler
TARGET=main

all:	main.o node.o
	$(CC) main.c node.c -o $(TARGET)

clean:
	rm *.o $(TARGET)
