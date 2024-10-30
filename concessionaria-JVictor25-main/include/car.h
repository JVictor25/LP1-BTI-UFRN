#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include "veiculo.h"

class automovel : public veiculo {
private:
    std::string tipodemotor;

public:
    automovel(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string tipodemotor);
~car();
    std::string gettipodemotor();
    void settipodemotor(std::string tipodemotor);
};

#endif