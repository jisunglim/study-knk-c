inventory: inventory.o readline.o
	gcc -o output/inventory output/inventory.o output/readline.o

inventory.o: inventory.c readline.h
	gcc -c -o output/inventory.o inventory.c

readline.o: readline.c readline.h
	gcc -c -o output/readline.o readline.c
    
