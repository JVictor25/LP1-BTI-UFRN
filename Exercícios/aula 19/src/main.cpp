#include <iostream>
#include "fila.h"

using namespace std;


int main(int argc, char *argv[])
{
Fila<int> fila;
cout << "Tamanho: " << fila.size() << endl;
cout << "Capacidade: " << fila.capacidade() << endl;
fila.push(10);
fila.push(12);
fila.push(15);
fila.push(17);
fila.push(20);

cout << fila.front() << endl;
cout << fila.back() << endl;
fila.pop();
cout << "Tamanho: " << fila.size() << endl;
cout << fila.front() << endl;
cout << fila.back() << endl;
fila.pop();
cout << "Tamanho: " << fila.size() << endl;
cout << fila.front() << endl;
cout << fila.back() << endl;
fila.pop();
cout << fila.front() << endl;
cout << fila.back() << endl;
cout << "Tamanho: " << fila.size() << endl;

Fila<string> fila4;
fila4.push("Ana");
fila4.push("Maria");
fila4.push("Joao");
cout << fila4.front() << endl;
cout << fila4.back() << endl;
fila4.pop();
cout << fila4.front() << endl;
cout << fila4.back() << endl;
fila4.pop();
cout << fila4.front() << endl;
cout << fila4.back() << endl;
fila4.pop();
}
