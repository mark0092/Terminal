all: main.o cd.o cat.o mkdir.o exit.o rm.o touch.o mv.o catwv.o
	gcc main.o cd.o cat.o mkdir.o exit.o rm.o touch.o mv.o catwv.o

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

rm.o: rm.c
	gcc -c rm.c

touch.o: touch.c
	gcc -c touch.c

mv.o: mv.c
	gcc -c mv.c

catwv.o: catwv.c
	gcc -c catwv.c