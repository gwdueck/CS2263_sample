test: mystring.o main.o
	gcc -o test mystring.o main.o
mystring.o: mystring.c mystring.h
	gcc -c mystring.c
main.o: main.c mystring.h
	gcc -c main.c
