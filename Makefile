# Makefile

CC=gcc # use gcc compiler
TARGET=main
FLAGS=-Wall -Werror

all:	main.o node.o
	$(CC) $(FLAGS) main.c node.c -o $(TARGET)

clean:
	rm *.o $(TARGET)
