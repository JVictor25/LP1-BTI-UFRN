#include <iostream>
#include <string>
using namespace std;

class aluno {
 private:
 string nome;
 int semestre;
 string matricula; 
 string telefone;
 string email;

 public:
 string getnome();
 void setnome(string x);
 string getsemestre();
 void setsemestre(string x);
 string getmatricula();
 void setmatricula(string x);
 string gettelefone();
 void settelefone(string x);
 string getemail();
 void setemail(string x);
};