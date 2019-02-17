main: main.o funcs.o
	g++ -o main main.o funcso

test: test.o funcs.o
	g++ -o test tests.o funcs.o

test.o: test.cpp funcs.h

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm funcs.o main.

