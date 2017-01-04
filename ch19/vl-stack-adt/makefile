client: client.o stack.o
	gcc -o out/client out/client.o out/stack.o

client.o: client.c stack.h
	gcc -c -o out/client.o client.c

stack.o: stack.c stack.h
	gcc -c -o out/stack.o stack.c
