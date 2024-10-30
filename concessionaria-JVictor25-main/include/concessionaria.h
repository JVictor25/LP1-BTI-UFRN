#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include <vector>
#include "veiculos.h"
#include "automovel.h"
#include "moto.h"
#include "caminhao.h"

class concessionaria {
private:
    std::string nome;
    std::string cnpj;
    int numerodeveiculos;
    int numerodecarros;
    int numerodemotos;
    int numerodecaminhoes;
    std::vector<veiculo*> estoque;
    std::vector<std::string*> estoquepelochassi;
    std::vector<std::string*> estoqueaux;
    double valordafrota;
    double valordoscarros;
    double valordoscaminhoes;
    double valordasmotos;

public:
    concessionaria(std::string nome, std::string cnpj, int numerodeveiculos);
~concessionaria();
    std::string getnome() const;
    std::string getcnpj() const;
    int getnumerodeveiculos();
    std::vector<veiculo*> getestoque();
    std::vector<std::string*> getestoquepelochassi();
    std::vector<std::string*> getestoqueaux();

    double getvalordafrota() const;
    double getvalordoscarros() const;
    double getvalordoscaminhoes() const;
    double getvalordasmotos() const;

    void setnome(std::string nome);
    void setcnpj(std::string cnpj);

    void adicionarautomovel(automovel* automovel);
    void adicionarmoto(moto* moto);
    void adicionarcaminhao(caminhao* caminhao);
    std::string removerveiculo(std::string numerodochassi);
    std::string procurarveiculo(std::string numerodochassi);
    std::string listarconcessionaria();
    std::string aumentarprecos(double x);
    
};

#endif