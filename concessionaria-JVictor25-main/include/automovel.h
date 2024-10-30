#ifndef AUTOMOVEL_H 
#define AUTOMOVEL_H

#include <string> 
#include "veiculos.h" 

class automovel : public veiculo { 
public:
    automovel(std::string marca, double preco, std::string numerodochassi, int anodefabricacao, std::string tipodemotor);
     ~automovel(); 
    std::string gettipodemotor();
    void settipodemotor(std::string tipodemotor);
    std::string auxdesearch() const override;

private:
    std::string tipodemotor;
};

#endif /* AUTOMOVEL_H */