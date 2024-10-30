.DEFAULT_GOAL := all

#quando adicionar uma nova dependencia não esqueça de atualizar aqui!
OBJECTS=build/sistema.o build/executor.o build/concessionaria.o build/veiculos.o build/automovel.o build/moto.o build/caminhao.o

build/sistema.o: src/sistema.cpp include/sistema.h include/concessionaria.h
	g++ -Iinclude -fsanitize=address src/sistema.cpp -c -o build/sistema.o

build/executor.o: src/executor.cpp include/executor.h 
	g++ -Iinclude -fsanitize=address src/executor.cpp -c -o build/executor.o

build/concessionaria.o: src/concessionaria.cpp include/concessionaria.h
	g++ -Iinclude -fsanitize=address src/concessionaria.cpp -c -o build/concessionaria.o

build/veiculos.o: src/veiculos.cpp include/veiculos.h
	g++ -Iinclude -fsanitize=address src/veiculos.cpp -c -o build/veiculos.o

build/veiculo.o: src/veiculo.cpp include/veiculo.h
	g++ -Iinclude -fsanitize=address src/veiculo.cpp -c -o build/veiculo.o

build/automovel.o: src/automovel.cpp include/automovel.h
	g++ -Iinclude -fsanitize=address src/automovel.cpp -c -o build/automovel.o

build/moto.o: src/moto.cpp include/moto.h
	g++ -Iinclude -fsanitize=address src/moto.cpp -c -o build/moto.o

build/caminhao.o: src/caminhao.cpp include/caminhao.h
	g++ -Iinclude -fsanitize=address src/caminhao.cpp -c -o build/caminhao.o

objects: $(OBJECTS)

programa: objects src/programa.cpp
	g++ -Wall -fsanitize=address -Iinclude $(OBJECTS) src/programa.cpp -o bin/programa

clean:
	rm build/*.o bin/programa

all: programa

run:
	./bin/programa