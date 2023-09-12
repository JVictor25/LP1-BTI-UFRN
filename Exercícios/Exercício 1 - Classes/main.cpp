#include <iostream>
#include <string>
using namespace std;

class aluno {
 private:
 string nome;
 string semestre;
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

string aluno::getnome() {
 return nome;
}
void aluno::setnome(string x) {
 nome = x;
}

string aluno::getsemestre() {
 return semestre;
}
void aluno::setsemestre(string x) {
 semestre = x;
}

string aluno::getmatricula() {
 return matricula;
}
void aluno::setmatricula(string x) {
 matricula = x;
}

string aluno::gettelefone() {
 return telefone;
}
void aluno::settelefone(string x) {
 telefone = x;
}

string aluno::getemail() {
 return email;
}
void aluno::setemail(string x) {
 email = x;
}

int main()
{
   aluno x;
   string nome_x;
   string semestre_x;
   string matricula_x;
   string telefone_x;
   string email_x;
//o cin para no primeiro " ";
   cout << "Digite o nome do aluno: " << endl;
    cin >> nome_x;
    x.setnome(nome_x);
  
   cout << "Digite o semestre em que o aluno está: " << endl;
    cin >> semestre_x;
    x.setsemestre(semestre_x);
  
   cout << "Digite a matricula do aluno: " << endl;
    cin >> matricula_x;
    x.setmatricula(matricula_x);
  
   cout << "Digite o telefone do aluno: " << endl;
    cin >> telefone_x;
    x.settelefone(telefone_x);
  
   cout << "Digite o E-mail do aluno: " << endl;
    cin >> email_x; 
    x.setemail(email_x);

  cout << "Aluno: " << endl;
  cout << "Nome: "  << x.getnome() << endl;
  cout << "Semestre: " << x.getsemestre() << endl;
  cout << "Matricula: " << x.getmatricula() << endl;
  cout << "Telefone: " << x.gettelefone() << endl;
  cout << "E-mail: " << x.getemail() << endl;
  
  
}
