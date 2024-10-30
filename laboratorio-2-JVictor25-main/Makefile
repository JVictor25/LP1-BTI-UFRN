complexo: build/main.o build/complexo.o  
	g++ -o bin/complexo -Wall -ansi -pedantic build/main.o build/complexo.o 

build/main.o: src/main.cpp include/complexo.h 
	g++ -c -Wall -ansi -pedantic src/main.cpp -Iinclude -o build/main.o

build/complexo.o: src/complexo.cpp include/complexo.h
	g++ -c -Wall -ansi -pedantic src/complexo.cpp -Iinclude -o build/complexo.o
