#include "moto.h"

moto::moto(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string modelo)
    : veiculo(marca, preco, numerodochassi, anodefabricacao), modelo(modelo) {}
moto::~moto() {
}
std::string moto::getmodelo(){ return modelo; }

void moto::setmodelo(std::string modelo) { this->modelo = modelo; }
std::string moto::auxdesearch() const {
       return "Modelo: " + modelo;
   }