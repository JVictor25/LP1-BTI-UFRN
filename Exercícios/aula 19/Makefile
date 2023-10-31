#SEU MAKEFILE
fila: build/main.o  
	g++ -o bin/fila -Wall -ansi -pedantic build/main.o
build/main.o: src/main.cpp include/fila.h 
	g++ -c -Wall -ansi -pedantic src/main.cpp -Iinclude -o build/main.o

