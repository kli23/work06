all: arrays.o
	gcc -o arrays arrays.o

arrays.o : arrays.c
	gcc -c arrays.c

run :
	./arrays

clean :
	rm arrays.o
	rm arrays
