make-all: compound-decl extern-linkage-test struct-init
	gcc -o out/compound-decl out/compound-decl.o
	gcc -o out/extern-linkage-test out/extern-linkage-test.o
	gcc -o out/struct-init out/struct-init.o

compound-decl: compound-decl.c
	gcc -c -o out/compound-decl.o compound-decl.c

extern-linkage-test: extern-linkage-test.c
	gcc -c -o out/extern-linkage-test.o extern-linkage-test.c

struct-init: struct-init.c
	gcc -c -o out/struct-init.o struct-init.c
