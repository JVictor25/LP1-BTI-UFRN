#ifndef MOTO_H
#define MOTO_H

#include "veiculos.h"

class moto : public veiculo {
private:
    std::string modelo;

public:
    moto(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string modelo);
~moto();
    std::string getmodelo();
    void setmodelo(std::string modelo);
    std::string auxdesearch() const override;
    

};

#endif