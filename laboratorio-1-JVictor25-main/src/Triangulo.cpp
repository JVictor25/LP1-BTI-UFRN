#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "Triangulo.hpp"

using namespace std;



void Triangulo(int base){

    cout << "Area do triangulo: " << std::setprecision(7) << ((base*(sqrt(3))/4)*base) << endl;

    cout << "Perimetro do triangulo: " << (base+base+base) << endl;
}
