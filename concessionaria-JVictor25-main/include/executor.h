#ifndef EXECUTOR_H
#define EXECUTOR_H
#include "sistema.h"
#include <istream>
#include <ostream>
#include <sstream>

using namespace std;

class executor {
  private:
  Sistema * sistema;
  stringstream ss;
  bool sair = false;

  public:
  executor(Sistema &sistema);

  void iniciar(istream &in, ostream &out);

  string processarlinha(string linha);
};

#endif