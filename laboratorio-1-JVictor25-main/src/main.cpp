#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
//#include "functions.hpp"
#include "Triangulo.hpp"
#include "Retangulo.hpp"
#include "Quadrado.hpp"
#include "Circulo.hpp"
#include "Piramide.hpp"
#include "Paralelepipedo.hpp"
#include "Cubo.hpp"
#include "Esfera.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	char *forma;
    string triangulo("triangulo");
    string retangulo("retangulo");
    string quadrado("quadrado");
    string circulo("circulo");
    string piramide("piramide");
    string cubo("cubo");
    string paralelepipedo("paralelepipedo");
    string esfera("esfera");


	forma=argv[1];
    int n1, n2, n3, n4, n5;
    
    if(forma==triangulo){
        n1=atoi(argv[2]);
        
        Triangulo(n1);
    }
    else if(forma==retangulo){
        n1=atoi(argv[2]);
        n2=atoi(argv[3]);
 
        Retangulo(n1,n2);
    }
    else if(forma==quadrado){
        n1=atoi(argv[2]);

        Quadrado(n1);
    }
    else if(forma==circulo){
        n1=atoi(argv[2]);

        Circulo(n1);
    }
    else if(forma==piramide){
        n1=atoi(argv[2]);
        n2=atoi(argv[3]);

        Piramide(n1,n2);
    }
    else if(forma==paralelepipedo){
        n1=atoi(argv[2]);
        n2=atoi(argv[3]);
        n3=atoi(argv[4]);
  
        Paralelepipedo(n1,n2,n3);
    }
    else if(forma==cubo){
        n1=atoi(argv[2]);
   
        Cubo(n1);
    }
    else if(forma==esfera){
        n1=atoi(argv[2]);
    
        Esfera(n1);
    }
}
