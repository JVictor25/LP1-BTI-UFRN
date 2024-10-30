#SEU MAKEFILE
geometria: build/main.o build/Triangulo.o build/Retangulo.o build/Quadrado.o build/Circulo.o build/Piramide.o build/Paralelepipedo.o build/Cubo.o build/Esfera.o
	g++ -o bin/geometria -Wall -ansi -pedantic build/main.o build/Triangulo.o build/Retangulo.o build/Quadrado.o build/Circulo.o build/Piramide.o build/Paralelepipedo.o build/Cubo.o build/Esfera.o 

build/main.o: src/main.cpp include/Triangulo.hpp include/Retangulo.hpp include/Quadrado.hpp include/Circulo.hpp include/Piramide.hpp include/Paralelepipedo.hpp include/Cubo.hpp include/Esfera.hpp
	g++ -c -Wall -ansi -pedantic src/main.cpp -Iinclude -o build/main.o

build/Triangulo.o: src/Triangulo.cpp include/Triangulo.hpp
	g++ -c -Wall -ansi -pedantic src/Triangulo.cpp -Iinclude -o build/Triangulo.o

build/Retangulo.o: src/Retangulo.cpp include/Retangulo.hpp
	g++ -c -Wall -ansi -pedantic src/Retangulo.cpp -Iinclude -o build/Retangulo.o

build/Quadrado.o: src/Quadrado.cpp include/Quadrado.hpp
	g++ -c -Wall -ansi -pedantic src/Quadrado.cpp -Iinclude -o build/Quadrado.o

build/Circulo.o: src/Circulo.cpp include/Circulo.hpp
	g++ -c -Wall -ansi -pedantic src/Circulo.cpp -Iinclude -o build/Circulo.o

build/Piramide.o: src/Piramide.cpp include/Piramide.hpp
	g++ -c -Wall -ansi -pedantic src/Piramide.cpp -Iinclude -o build/Piramide.o

build/Paralelepipedo.o: src/Paralelepipedo.cpp include/Paralelepipedo.hpp
	g++ -c -Wall -ansi -pedantic src/Paralelepipedo.cpp -Iinclude -o build/Paralelepipedo.o

build/Cubo.o: src/Cubo.cpp include/Cubo.hpp
	g++ -c -Wall -ansi -pedantic src/Cubo.cpp -Iinclude -o build/Cubo.o

build/Esfera.o: src/Esfera.cpp include/Esfera.hpp include/Circulo.hpp
	g++ -c -Wall -ansi -pedantic src/Esfera.cpp -Iinclude -o build/Esfera.o
