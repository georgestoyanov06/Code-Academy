
CC= gcc
CFLAGS := -I.

all: Project2

Project2: projct1.o funlist.o
		$(CC) $(CFLAGS) project1.o funlist.o -o Project2
funlist.o: funlist.c hfile.h
		$(CC) $(CFLAGS) -c funlist.c
projct1.o: project1.c hfile.h
		$(CC) $(CFLAGS) -c project1.c
clean: 
		rm funlist.o Project2.exe procet1.o