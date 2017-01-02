inline-test : inline-test.o inline-extern.o
	gcc -o out/inline-test out/inline-test.o out/inline-extern.o

inline-test.o : inline-test.c
	gcc -c -o out/inline-test.o inline-test.c

inline-extern.o : inline-extern.c inline-extern.h
	gcc -c -o out/inline-extern.o inline-extern.c
