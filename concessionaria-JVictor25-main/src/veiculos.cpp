#include "veiculos.h"

veiculo::veiculo(std::string m, double p, std::string chassi, int ano){
    marca=m;
    preco=p;
    numerodochassi=chassi;
    anodefabricacao=ano;
}
veiculo::~veiculo() {
}
std::string veiculo::getmarca() { return marca; }
double veiculo::getpreco() { return preco; }
std::string veiculo::getnumerodochassi()const{ return numerodochassi; }
int veiculo::getanodefabricacao() { return anodefabricacao; }

void veiculo::setmarca(std::string marca) { this->marca = marca; }
void veiculo::setpreco(double preco) { this->preco = preco; }
void veiculo::setnumerodochassi(std::string numerodochassi) { this->numerodochassi = numerodochassi; }
void veiculo::setanodefabricacao(int anodefabricacao) { this->anodefabricacao = anodefabricacao; }