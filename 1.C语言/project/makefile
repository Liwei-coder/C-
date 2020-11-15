.PHONY: clean
all: bin/program 
	./bin/program
src/test.o: include/test.h src/test.c 
	gcc -I./include -c src/test.c -o src/test.o
bin/program: main.c include/test.h src/test.o
	gcc -I./include  main.c src/test.o -o bin/program
clean: 
	rm -rf src/test.o bin/program
