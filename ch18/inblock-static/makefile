inblock-static: inblock-static.o add.o static-header-test.o
	gcc -o out/inblock-static out/inblock-static.o out/add.o out/static-header-test.o

inblock-static.o: inblock-static.c add.h static-header-test.h
	gcc -c -o out/inblock-static.o inblock-static.c

add.o: add.c add.h
	gcc -c -o out/add.o add.c

static-header-test.o: static-header-test.c static-header-test.h
	gcc -c -o out/static-header-test.o static-header-test.c
