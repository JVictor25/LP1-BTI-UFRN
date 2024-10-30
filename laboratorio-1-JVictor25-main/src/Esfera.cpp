#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "Esfera.hpp"
#include "Circulo.hpp"

using namespace std;



void Esfera(int raio){
    cout << "Area da esfera: " <<  (4*(pi*(raio*raio))) << endl;

    cout << "Volume da esfera: " << (((4*pi*(raio*raio*raio)))/3) << endl;
}
