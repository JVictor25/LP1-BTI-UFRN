#include "automovel.h"

automovel::automovel(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string tipodemotor)
    : veiculo(marca, preco, numerodochassi, anodefabricacao), tipodemotor(tipodemotor) {}
automovel::~automovel() {
}

std::string automovel::gettipodemotor() { return tipodemotor; }

void automovel::settipodemotor(std::string tipodemotor) { this->tipodemotor = tipodemotor; }

std::string automovel:: auxdesearch() const {
       return "Tipo de motor: " + tipodemotor;
   }