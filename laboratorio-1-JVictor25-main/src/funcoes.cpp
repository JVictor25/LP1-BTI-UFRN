#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "funcoes.hpp"

using namespace std;



void Triangulo(int base){

    cout << "Area do triangulo: " << std::setprecision(7) << ((base*(sqrt(3))/2)*base) << endl;

    cout << "Perimetro do triangulo: " << (base+base+base) << endl;
}
void Retangulo(int base, int altura){

    cout << "Area do retangulo: " << (base*altura) << endl;

    cout << "Perimetro do retangulo: " << (2*(base+altura)) << endl;
}
void Quadrado(int lado){

    cout << "Area do quadrado: " << (lado*lado) << endl;

    cout << "Perimetro do quadrado: " << (4*lado) << endl;
}
void Circulo(int raio){
    cout << "Area do circulo: " << (pi*(raio*raio)) << endl;

    cout << "Perimetro do circulo: " << (2*pi*raio) << endl;
}
void Piramide(int area_base, int altura){

    cout << "Area do piramide: " << (area_base) << endl;

    cout << "Volume do piramide: " << (altura) << endl;
}
void Paralelepipedo(int aresta1, int aresta2, int aresta3){

    cout << "Area do paralelepipedo: " <<  ((2*aresta1*aresta2)+(2*aresta1*aresta3)+(2*aresta2*aresta3)) << endl;

    cout << "Volume do paralelepipedo: " << (aresta1*aresta2*aresta3) << endl;
}

void Esfera(int raio){
    cout << "Area da esfera: " <<  (4*(pi*(raio*raio))) << endl;

    cout << "Volume da esfera: " << (((4*pi*(raio*raio*raio)))/3) << endl;
}

void Cubo(int aresta){

    cout << "Area do cubo: " <<  (6*(aresta*aresta)) << endl;

    cout << "Volume do cubo: " << (aresta*aresta*aresta) << endl;
}

