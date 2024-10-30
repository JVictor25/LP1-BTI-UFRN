#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "Circulo.hpp"

using namespace std;



void Circulo(int raio){
    cout << "Area do circulo: " << (pi*(raio*raio)) << endl;

    cout << "Perimetro do circulo: " << (2*pi*raio) << endl;
}