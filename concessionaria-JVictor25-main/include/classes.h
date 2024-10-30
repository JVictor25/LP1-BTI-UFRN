#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_HPP
#include <string>
#include <iostream>
#include <vector>

class Veiculo {
protected:
    std::string marca;
    double preco;
    std::string numerodoChassi;
    int anoDeFabricacao;

public:
    Veiculo(std::string marca, double preco, std::string numeroDoChassi, int anoDeFabricacao)
        : marca(marca), preco(preco), numeroDoChassi(numeroDoChassi), anoDeFabricacao(anoDeFabricacao) {}
    
~Veiculo();
std::string getMarca() { return marca; }
double getPreco() { return preco; }
std::string getNumeroDoChassi() { return numeroDoChassi; }
int getAnoDeFabricacao() { return anoDeFabricacao; }


void setMarca(std::string marca) { this->marca = marca; }
void setPreco(double preco) { this->preco = preco; }
void setNumeroDoChassi(std::string numeroDoChassi) { this->numeroDoChassi = numeroDoChassi; }
void setAnoDeFabricacao(int anoDeFabricacao) { this->anoDeFabricacao = anoDeFabricacao; }
};

class Automovel : public Veiculo {
private:
    std::string tipoDeMotor;

public:
    Automovel(std::string marca, double preco, std::string numeroDoChassi, int anoDeFabricacao, std::string tipoDeMotor)
        : Veiculo(marca, preco, numeroDoChassi, anoDeFabricacao), tipoDeMotor(tipoDeMotor) {}

std::string getTipoDeMotor() { return tipoDeMotor; }


void setTipoDeMotor(std::string tipoDeMotor) { this->tipoDeMotor = tipoDeMotor; }

};

class Moto : public Veiculo {
private:
    std::string modelo;

public:
    Moto(std::string marca, double preco, std::string numeroDoChassi, int anoDeFabricacao, std::string modelo)
        : Veiculo(marca, preco, numeroDoChassi, anoDeFabricacao), modelo(modelo) {}


std::string getModelo() { return modelo; }

void setModelo(std::string modelo) { this->modelo = modelo; }
};

class Caminhao : public Veiculo {
private:
    std::string tipoDeCarga;

public:
    Caminhao(std::string marca, double preco, std::string numeroDoChassi, int anoDeFabricacao, std::string tipoDeCarga)
        : Veiculo(marca, preco, numeroDoChassi, anoDeFabricacao), tipoDeCarga(tipoDeCarga) {}

    // getters e setters omitidos para brevidade
    // Getter method
std::string getTipoDeCarga() { return tipoDeCarga; }

// Setter method
void setTipoDeCarga(std::string tipoDeCarga) { this->tipoDeCarga = tipoDeCarga; }
};


class Concessionaria {
private:
    std::string nome;
    std::string cnpj;
    int numeroDeVeiculos;
    std::vector<Veiculo*> estoque;

public:
    Concessionaria(std::string nome, std::string cnpj, std::int numeroveiculos)
        : nome(nome), cnpj(cnpj), numeroDeVeiculos(numeroveiculos) {}
        // Getter method
std::string getTipoDeCarga() { return tipoDeCarga; }

// Setter method
void setTipoDeCarga(std::string tipoDeCarga) { this->tipoDeCarga = tipoDeCarga; }

    void adicionarVeiculo(Veiculo* veiculo) {
        // Verifique se o veículo já está no estoque antes de adicioná-lo
        for (auto& v : estoque) {
            if (v->getNumeroDoChassi() == veiculo->getNumeroDoChassi()) {
                std::cout << "ERRO - Veículo " << veiculo->getNumeroDoChassi() << " já adicionado à concessionária " << nome << std::endl;
                return;
            }
        }

        estoque.push_back(veiculo);
        numeroDeVeiculos++;
    }

    void removerVeiculo(std::string numeroDoChassi) {
        for (auto it = estoque.begin(); it != estoque.end(); ++it) {
            if ((*it)->getNumeroDoChassi() == numeroDoChassi) {
                estoque.erase(it);
                numeroDeVeiculos--;
                std::cout << "Veículo " << numeroDoChassi << " removido da concessionária " << nome << std::endl;
                return;
            }
        }
    }
};






#endif