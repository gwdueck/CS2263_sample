test: mystring.o main.o
	gcc -o test mystring.o main.o
mystring.o: mystring.c
	gcc -c mystring.c
main.o: main.c
	gcc -c main.c
