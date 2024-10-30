#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "Paralelepipedo.hpp"

using namespace std;



void Paralelepipedo(int aresta1, int aresta2, int aresta3){

    cout << "Area do paralelepipedo: " <<  ((2*aresta1*aresta2)+(2*aresta1*aresta3)+(2*aresta2*aresta3)) << endl;

    cout << "Volume do paralelepipedo: " << (aresta1*aresta2*aresta3) << endl;
}