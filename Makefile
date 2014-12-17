CC=gcc
CFLAGS=-lSDL2

helloSDL: main.c main.h
	$(CC) main.c main.h -o helloSDL $(CFLAGS)
