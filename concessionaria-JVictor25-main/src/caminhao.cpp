#include "caminhao.h"

caminhao::caminhao(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string tipodecarga)
    : veiculo(marca, preco, numerodochassi, anodefabricacao), tipodecarga(tipodecarga) {}
caminhao::~caminhao() {
}
std::string caminhao::gettipodecarga() { return tipodecarga; }

void caminhao::settipodecarga(std::string tipodecarga) { this->tipodecarga = tipodecarga; }

std::string caminhao::auxdesearch() const {
       return "Tipo de carga: " + tipodecarga;
   }