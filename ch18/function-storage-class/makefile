fn-storage: fn-storage.o static-fn.o extern-fn.o
	gcc -o out/fn-storage out/fn-storage.o out/static-fn.o out/extern-fn.o

fn-storage.o: fn-storage.c static-fn.h extern-fn.h
	gcc -c -o out/fn-storage.o fn-storage.c

static-fn.o: static-fn.c static-fn.h
	gcc -c -o out/static-fn.o static-fn.c

extern-fn.o: extern-fn.c extern-fn.h
	gcc -c -o out/extern-fn.o extern-fn.c
