#ifndef CLASSEEMPRESA_H
#define CLASSEEMPRESA_H

#include <string>
#include "FuncionarioCaixa.h"
using namespace std;

class Empresa {
private:
    string nome;
    FuncionarioCaixa funcionario1;
    FuncionarioCaixa funcionario2;

public:
    Empresa(string n, FuncionarioCaixa f1, FuncionarioCaixa f2);

    void setNome(string n);
    string getNome();

    void setFuncionario1(FuncionarioCaixa f1);
    FuncionarioCaixa getFuncionario1();

    void setFuncionario2(FuncionarioCaixa f2);
    FuncionarioCaixa getFuncionario2();

    void imprime_info();
};

#endif