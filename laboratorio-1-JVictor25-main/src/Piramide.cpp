#include <iostream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
#include <iomanip>
#include "Piramide.hpp"

using namespace std;


void Piramide(int area_base, int altura){
    double ha = sqrt(((area_base/2)*(area_base/2))+(altura*altura));

    cout << "Area da piramide: " << ((2*area_base*ha)+(area_base*area_base)) << endl;

    cout << "Volume da piramide: " << ((area_base*area_base*altura)/3) << endl;
}
