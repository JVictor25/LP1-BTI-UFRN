geometria: build/main.o build/Triangulo.o build/Retangulo.o build/Quadradp.o build/Circulo.o build/Piramide.o build/Paralelepipedo.o build/Cubo.o build/Esfera.o
	g++ -o bin/geometria build/main.o build/Triangulo.o build/Retangulo.o build/Quadradp.o build/Circulo.o build/Piramide.o build/Paralelepipedo.o build/Cubo.o build/Esfera.o 

build/main.o: src/main.cpp include/Triangulo.hpp include/Retangulo.hpp include/Quadradp.hpp include/Circulo.hpp include/Piramide.hpp include/Paralelepipedo.hpp include/Cubo.hpp include/Esfera.hpp
	g++ -c src/main.cpp -Iinclude -o build/main.o

build/Triangulo.o: src/Triangulo.cpp include/Triangulo.hpp
	g++ -c src/Triangulo.cpp -Iinclude -o build/Triangulo.o

build/Retangulo.o: src/Retangulo.cpp include/Retangulo.hpp
	g++ -c src/Retangulo.cpp -Iinclude -o build/Retangulo.o

build/Quadradp.o: src/Quadradp.cpp include/Quadradp.hpp
	g++ -c src/Quadradp.cpp -Iinclude -o build/Quadradp.o

build/Circulo.o: src/Circulo.cpp include/Circulo.hpp
	g++ -c src/Circulo.cpp -Iinclude -o build/Circulo.o

build/Piramide.o: src/Piramide.cpp include/Piramide.hpp
	g++ -c src/Piramide.cpp -Iinclude -o build/Piramide.o

build/Paralelepipedo.o: src/Paralelepipedo.cpp include/Paralelepipedo.hpp
	g++ -c src/Paralelepipedo.cpp -Iinclude -o build/Paralelepipedo.o

build/Cubo.o: src/Cubo.cpp include/Cubo.hpp
	g++ -c src/Cubo.cpp -Iinclude -o build/Cubo.o

build/Esfera.o: src/Esfera.cpp include/Esfera.hpp
	g++ -c src/Esfera.cpp -Iinclude -o build/Esfera.o


////////////////////////////////////////////////////////
	geometria: build/main.o build/funcoes.o 
	g++ -o bin/geometria build/main.o build/funcoes.o 
build/main.o: src/main.cpp include/funcoes.hpp 
	g++ -c src/main.cpp -Iinclude -o build/main.o

build/funcoes.o: src/funcoes.cpp include/funcoes.hpp
	g++ -c src/funcoes.cpp -Iinclude -o build/funcoes.o
