#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "veiculos.h"

class caminhao : public veiculo {
private:
    std::string tipodecarga;

public:
    caminhao(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string tipodecarga);
~caminhao();
    std::string gettipodecarga();
    void settipodecarga(std::string tipodecarga);
    std::string auxdesearch() const override;
    


};

#endif