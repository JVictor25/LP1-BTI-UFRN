#include "concessionaria.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

concessionaria::concessionaria(std::string n, std::string cn, int numero){
    nome=n;
    cnpj=cn;
    numerodeveiculos=numero;
    numerodecarros=0;
    numerodecaminhoes=0;
    numerodemotos=0;
    valordafrota=0;
    valordoscarros=0;
    valordasmotos=0;
    valordoscaminhoes=0;
}

std::string concessionaria::getnome() const{ return nome; }
std::string concessionaria::getcnpj() const{ return cnpj; }
int concessionaria::getnumerodeveiculos() { return numerodeveiculos; }
concessionaria::~concessionaria() {
}

std::vector<veiculo*> concessionaria::getestoque() { return estoque; }
std::vector<std::string*> concessionaria::getestoquepelochassi() { return estoquepelochassi; }
std::vector<std::string*> concessionaria::getestoqueaux() { return estoqueaux; }

   double concessionaria::getvalordafrota() const { return valordafrota; }
   double concessionaria::getvalordoscarros() const { return valordoscarros; }
   double concessionaria::getvalordoscaminhoes() const { return valordoscaminhoes; }
   double concessionaria::getvalordasmotos() const { return valordasmotos; }

void concessionaria::setnome(std::string nome) { this->nome = nome; }
void concessionaria::setcnpj(std::string cnpj) { this->cnpj = cnpj; }

void concessionaria::adicionarautomovel(automovel* automovel) {
   estoque.push_back(automovel);
   valordafrota += automovel->getpreco();
   valordoscarros += automovel->getpreco();
   numerodeveiculos++;
   numerodecarros++;
   std::string* chassi = new std::string(automovel->getnumerodochassi());
   estoquepelochassi.push_back(chassi);
   std::string* carro = new std::string("carro");
   estoqueaux.push_back(carro);
}

void concessionaria::adicionarmoto(moto* moto) {
   estoque.push_back(moto);
   valordafrota += moto->getpreco();
   valordasmotos += moto->getpreco();
   numerodeveiculos++;
   numerodemotos++;
   std::string* chassi = new std::string(moto->getnumerodochassi());
   estoquepelochassi.push_back(chassi);
   std::string* m = new std::string("moto");
   estoqueaux.push_back(m);
}

void concessionaria::adicionarcaminhao(caminhao* caminhao) {
   estoque.push_back(caminhao);
   valordafrota += caminhao->getpreco();
   valordoscaminhoes += caminhao->getpreco();
   numerodeveiculos++;
   numerodecaminhoes++;
   std::string* chassi = new std::string(caminhao->getnumerodochassi());
   estoquepelochassi.push_back(chassi);
   std::string* cam = new std::string("caminhao");
   estoqueaux.push_back(cam);
}
 
std::string concessionaria::removerveiculo(std::string numerodochassi){
 for (int i=0; i<numerodeveiculos; ++i) {

     if ((*estoquepelochassi[i] == numerodochassi) && ((*estoquepelochassi[i]) == (estoque[i]->getnumerodochassi()))) {

        std::string returnstring = "Veículo " + numerodochassi + " removido da concessionária " + nome;
        if(*estoqueaux[i]=="carro"){
         numerodecarros--;
         valordoscarros-=estoque[i]->getpreco();
         valordafrota-=estoque[i]->getpreco();
        }
     if(*estoqueaux[i]=="caminhao"){
         numerodecaminhoes--;
         valordoscaminhoes-=estoque[i]->getpreco();
         valordafrota-=estoque[i]->getpreco();
        }
       if(*estoqueaux[i]=="moto"){
         numerodemotos--;
         valordasmotos -= estoque[i]->getpreco();
         valordafrota -= estoque[i]->getpreco();
        }
        estoquepelochassi.erase(estoquepelochassi.begin() + i);
        estoque.erase(estoque.begin() + i);
        estoqueaux.erase(estoqueaux.begin() + i);
        numerodeveiculos--;
        std::cout << returnstring <<std::endl;
        return "";
   }}
 return "Veículo não encontrado na concessionária " + nome; // Retornar uma mensagem se o veículo não foi encontrado
}

std::string concessionaria::procurarveiculo(std::string numerodochassi){
 for (int i=0; i<numerodeveiculos; ++i) {

     if (((estoque[i]->getnumerodochassi()) == numerodochassi)) {
        std::cout << "Marca: "<< estoque[i]->getmarca() <<std::endl;
        std::cout << "Preço: R$" << std::fixed << std::setprecision(2) << estoque[i]->getpreco() <<std::endl;
        std::cout << "Chassi: " << estoque[i]->getnumerodochassi() <<std::endl;
        std::cout << "Ano: "<< estoque[i]->getanodefabricacao() <<std::endl;
        std::cout << estoque[i]->auxdesearch() <<std::endl;
        return "";
   }}
 return "Veículo não encontrado na concessionária " + nome; // Retornar uma mensagem se o veículo não foi encontrado
}

std::string concessionaria::listarconcessionaria(){
   std::cout << "Concessionaria: " << nome << std::endl;
   std::cout << "Total de Automóveis: " << numerodecarros << "; Valor total: R$ " << std::fixed << std::setprecision(2) << valordoscarros << std::endl;
   std::cout << "Total de Motos: " << numerodemotos << "; Valor total: R$ " << std::fixed << std::setprecision(2) << valordasmotos << std::endl;
   std::cout << "Total de Caminhões: " << numerodecaminhoes << "; Valor total: R$ " << std::fixed << std::setprecision(2) << valordoscaminhoes << std::endl;
   std::cout << "Valor Total da frota: R$ " << std::fixed << std::setprecision(2) << valordafrota << std::endl;
   return "";
}

std::string concessionaria::aumentarprecos(double porcentagem){
   double x=(porcentagem/100);
  for (int i=0; i<numerodeveiculos; ++i) {
      if(*estoqueaux[i]=="carro"){
  double novopreco = (1 + x) * estoque[i]->getpreco();
  valordoscarros = valordoscarros + novopreco - estoque[i]->getpreco();
  valordafrota = valordafrota + novopreco - estoque[i]->getpreco();
  estoque[i]->setpreco(novopreco);
}
      if(*estoqueaux[i]=="moto"){
  double novopreco = (1 + 2*x) * estoque[i]->getpreco();
  valordasmotos = valordasmotos + novopreco - estoque[i]->getpreco();
  valordafrota = valordafrota + novopreco - estoque[i]->getpreco();
  estoque[i]->setpreco(novopreco);
}
      if(*estoqueaux[i]=="caminhao"){
  double novopreco = (1 + 3*x) * estoque[i]->getpreco();
  valordoscaminhoes = valordoscaminhoes + novopreco - estoque[i]->getpreco();
  valordafrota = valordafrota + novopreco - estoque[i]->getpreco();
  estoque[i]->setpreco(novopreco);
}
   }
      std::cout << "Aumento de 10% nos preços de automóveis da Concessionária " << nome << " realizado" << std::endl;
      std::cout << "Aumento de 20% nos preços de automóveis da Concessionária " << nome << " realizado" << std::endl;
      std::cout << "Aumento de 30% nos preços de automóveis da Concessionária " << nome << " realizado" << std::endl;
   return "";
}

    