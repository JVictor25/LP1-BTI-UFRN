#ifndef SISTEMA_H
#define SISTEMA_H
#include <vector>
#include <string>
#include "concessionaria.h"
#include <iostream>

// sistema deve concentrar todas as operações
class Sistema {
  private:
		std::vector<concessionaria> concessionarias; 
		//um vetor com todos as concessionarias
  public:

		/*encerra o funcionamento do programa.
			@return uma string com a mensagem "saindo.."
		*/
		std::string quit();

		/* cria uma concessionaria e retorna uma string de erro/sucesso 
			@param nome o nome da concessionaria
			@return uma string contendo uma mensagem de erro ou "concessionaria criada"
		*/
		std::string create_concessionaria (const std::string nome);
		
		std::string add_car (const std::string nome);
		
		std::string add_moto (const std::string nome);
		std::string add_truck (const std::string nome);
		std::string remove_vehicle (const std::string nome);
		std::string search_vehicle (const std::string nome);
		std::string list_concessionaria (const std::string nome);
		std::string raise_price (const std::string nome);
};

#endif
