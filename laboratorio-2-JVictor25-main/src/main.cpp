#include <iostream>
#include <cmath>
#include"complexo.h"
#include <iomanip>
#include <string.h>


using namespace std;

int main(int argc, char *argv[]) {

 Complexo r(atof(argv[1]), atof(argv[2]));
 Complexo t(atof(argv[3]), atof(argv[4]));
 Complexo x(0,0);


 if(!strcmp(argv[5],"+")){
    cout << x;
    x=r+t;
    cout << x; 
 }
 else if(!strcmp(argv[5],"-")){
    x=r-t;
    cout << x; 
 }
 else if(!strcmp(argv[5],"*")){
    x=r*t;
    cout << x; 
 }
 else if(!strcmp(argv[5],"|")){
    x=t|r;
    cout <<";";
    x=r|t;
 }
 return 0;
}
