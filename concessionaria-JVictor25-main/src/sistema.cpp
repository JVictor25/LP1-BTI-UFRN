#include "concessionaria.h"
#include "sistema.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;



auto comparanomeconcessionaria = [](const concessionaria& c, const std::string& nome) {
  return (c.getnome() == nome);
};

bool compareStringWithVector(std::string str, std::vector<std::string*> vec) {
   std::vector<std::string*>::iterator it = std::find_if(vec.begin(), vec.end(), [&str](std::string* s) {
   return *s == str;
});
   if (it != vec.end()) {
       return false;
   } else {
       return true;
   }
}

/* COMANDOS */
string Sistema::quit() {
  return "Saindo...";
}

string Sistema::create_concessionaria (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  std::string cnpj;
  int numeroDeVeiculos;
  iss >> n;
  iss >> cnpj;
  iss >> numeroDeVeiculos;
  concessionarias.push_back(concessionaria(n, cnpj, numeroDeVeiculos));
  
  return "Concessionaria criada.";
}

string Sistema::add_car (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  std::string marca;
  double preco;
  std::string numeroDoChassi;
  std::string tipoDeMotor;
  double anoDeFabricacao;

  iss >> n;
  iss >> marca;
  iss >> preco;
  iss >> numeroDoChassi;
  iss >> anoDeFabricacao;
  iss >> tipoDeMotor;

  
 std::vector<concessionaria>::iterator it = std::find_if(concessionarias.begin(), concessionarias.end(), [&](const concessionaria& c) {
  return comparanomeconcessionaria(c, n);});

   if (compareStringWithVector(numeroDoChassi,it->getestoquepelochassi())) {
   automovel* car = new automovel(marca, preco, numeroDoChassi, anoDeFabricacao, tipoDeMotor);
   it->adicionarautomovel(car);
   return "Automovel adicionado";
} else {
   string returnstring = "ERRO - Veículo " + numeroDoChassi + " já adicionado à concessionária " + n;
   return returnstring;
}
}


string Sistema::add_moto (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  std::string marca;
  double preco;
  std::string numeroDoChassi;
  std::string modelo;
  int anoDeFabricacao;
  iss >> n;
  iss >> marca;
  iss >> preco;
  iss >> numeroDoChassi;
  iss >> anoDeFabricacao;
  iss >> modelo;

  std::vector<concessionaria>::iterator it = std::find_if(concessionarias.begin(), concessionarias.end(), [&](const concessionaria& c) {
  return comparanomeconcessionaria(c, n);});

   if (compareStringWithVector(numeroDoChassi,it->getestoquepelochassi())) {
   moto* mot = new moto(marca, preco, numeroDoChassi, anoDeFabricacao, modelo);
   it->adicionarmoto(mot);
   return "Moto adicionada";
} else {
   string returnstring = "ERRO - Veículo " + numeroDoChassi + " já adicionado à concessionária " + n;
   return returnstring;
}
}


string Sistema::add_truck (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  std::string marca;
  double preco;
  std::string numeroDoChassi;
  std::string tipodecarga;
  int anoDeFabricacao;
  iss >> n;
  iss >> marca;
  iss >> preco;
  iss >> numeroDoChassi;
  iss >> anoDeFabricacao;
  iss >> tipodecarga;

  std::vector<concessionaria>::iterator it = std::find_if(concessionarias.begin(), concessionarias.end(), [&](const concessionaria& c) {
  return comparanomeconcessionaria(c, n);});

   if (compareStringWithVector(numeroDoChassi,it->getestoquepelochassi())) {
   caminhao* truck = new caminhao(marca, preco, numeroDoChassi, anoDeFabricacao, tipodecarga);
   it->adicionarcaminhao(truck);
   return "Caminhão adicionado";
} else {
   string returnstring = "ERRO - Veículo " + numeroDoChassi + " já adicionado à concessionária " + n;
   return returnstring;
}
}

string Sistema::remove_vehicle (const string nome){

  std::istringstream iss (nome);
  std::string n;
  iss >> n;
  std::vector<concessionaria>::iterator it;
  for ( it =concessionarias.begin(); it != concessionarias.end(); ++it){
it->removerveiculo(n);
}
return "";
}

string Sistema::search_vehicle (const string nome){

  std::istringstream iss (nome);
  std::string n;
  iss >> n;
  std::vector<concessionaria>::iterator it;
  for ( it =concessionarias.begin(); it != concessionarias.end(); ++it){
std::cout << "Concessionaria: " << it->getnome() << std::endl;
it->procurarveiculo(n);
}
return "";
}

string Sistema::list_concessionaria (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  iss >> n;

  std::vector<concessionaria>::iterator it = std::find_if(concessionarias.begin(), concessionarias.end(), [&](const concessionaria& c) {
  return comparanomeconcessionaria(c, n);});
  it->listarconcessionaria();
  return "";
}

string Sistema::raise_price (const string nome) {
  std::istringstream iss (nome);
  std::string n;
  double porcentagem;
  iss >> n;
  iss >> porcentagem;

  std::vector<concessionaria>::iterator it = std::find_if(concessionarias.begin(), concessionarias.end(), [&](const concessionaria& c) {
  return comparanomeconcessionaria(c, n);});
  it->aumentarprecos(porcentagem);
  return "";
}




/* IMPLEMENTAR MÉTODOS PARA OS COMANDOS RESTANTES */
