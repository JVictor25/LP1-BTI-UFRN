#include <iostream>
#include <iomanip>
#include <cmath>
#include "complexo.h"
using namespace std;

Complexo::Complexo(double h, double m) {
 z = h; 
 zi = m; 
}

Complexo& Complexo::operator= (Complexo const &c) {
z = c.z;
zi = c.zi;

return *this;
}

std::ostream& operator<< (std::ostream &o, Complexo const &c) {
if(c.zi>0){
    o << c.z << "+" << c.zi << "i";
}
else{
    o << c.z << c.zi << "i";
}
return o;
}

Complexo Complexo::operator+ (Complexo &c) {
    Complexo x(0,0);
    x.z = z + c.z;
    x.zi = zi + c.zi;
    return x;
}
Complexo Complexo::operator- (Complexo &c) {
    Complexo x(0,0);
    x.z = z - c.z;
    x.zi = zi - c.zi;
    return x;
}

Complexo Complexo::operator* (Complexo &c) {
    Complexo x(0,0);
    x.z = ((z*c.z)-(zi*c.zi));
    x.zi = ((z*c.zi)+(zi*c.z));
    return x;
}

Complexo Complexo::operator| (Complexo &c) {
    Complexo x(0,0);
    x.z = floor(sqrt((c.z*c.z)+(c.zi*c.zi))*100)/100;
    cout<<fixed<<setprecision(2)<<x.z;
    return x;
}
