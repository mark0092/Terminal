all: main.o cd.o cat.o mkdir.o exit.o
	gcc main.o cd.o cat.o mkdir.o exit.o

main.o: main.c
	gcc -c main.c

cd.o: cd.c
	gcc -c cd.c

cat.o: cat.c
	gcc -c cat.c

mkdir.o: mkdir.c
	gcc -c mkdir.c

exit.o: exit.c
	gcc -c exit.c
