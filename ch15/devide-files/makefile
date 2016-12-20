justify: justify.o word.o line.o
	gcc -o output/justify output/justify.o output/word.o output/line.o

justify.o: justify.c word.h line.h
	gcc -c -o output/justify.o justify.c

word.o: word.c word.h
	gcc -c -o output/word.o word.c

line.o: line.c line.h
	gcc -c -o output/line.o line.c

