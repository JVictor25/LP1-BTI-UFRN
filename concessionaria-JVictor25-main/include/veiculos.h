#ifndef VEICULO_H // Incluir guarda
#define VEICULO_H

#include <string> // Para std::string

class veiculo {
public:
    veiculo(std::string marca, double preco, std::string numerodochassi, int anodefabricacao);
~veiculo();
    std::string getmarca();
    double getpreco();
    std::string getnumerodochassi()const;
    int getanodefabricacao();
    virtual std::string auxdesearch() const = 0;

    void setmarca(std::string marca);
    void setpreco(double preco);
    void setnumerodochassi(std::string numerodochassi);
    void setanodefabricacao(int anodefabricacao);

private:
    std::string marca;
    double preco;
    std::string numerodochassi;
    int anodefabricacao;
};

#endif /* VEICULO_H */