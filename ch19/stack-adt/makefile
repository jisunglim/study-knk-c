stack-client: stack-client.o stackADT.o
	gcc -o out/stack-client out/stack-client.o out/stackADT.o

stack-client.o: stack-client.c stackADT.h
	gcc -c -o out/stack-client.o stack-client.c

stackADT.o: stackADT.c stackADT.h
	gcc -c -o out/stackADT.o stackADT.c
