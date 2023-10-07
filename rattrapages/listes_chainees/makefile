CFLAGS=-Wall -g

liblc.a: lc.o lc.h
	ar crs liblc.a
	ran lib liblc.a


main.exe: main.o lc.o
	gcc $(CFLAGS) main.o lc.o -o main.exe

main.o: main.c
	gcc $(CFLAGS) -c main.c

lc.o: lc.c lc.h
	gcc $(CFLAGS) -c lc.c 
