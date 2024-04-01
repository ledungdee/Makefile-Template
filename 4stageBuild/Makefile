all: preprocessing compiling assembling linking

preprocessing:
	gcc -E main.c -o main.i

compiling:
	gcc -S main.i -o main.s

assembling:
	gcc -c main.s -o main.o

linking:
	gcc main.o -o ./build/prog

build_save_temps:
	gcc -Wall -save-temps main.c -o ./build/prog

clean:
	rm -f *.s *.o *.i ./build/*
