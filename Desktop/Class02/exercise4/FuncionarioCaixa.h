#ifndef FUNCIONARIOCAIXA_H
#define FUNCIONARIOCAIXA_H

#include <string>
#include "Calculadora.h"
using namespace std;

class FuncionarioCaixa {
private:
    string nome;
    string endereco;
    Calculadora calculadora;

public:
    FuncionarioCaixa();
    FuncionarioCaixa(string n, string e, Calculadora c);

    void setNome(string n);
    string getNome();

    void setEndereco(string e);
    string getEndereco();

    void setCalculadora(Calculadora c);
    Calculadora getCalculadora();

    float soma(float a, float b);
    float subtrai(float a, float b);
    float multiplica(float a, float b);
    float divide(float a, float b);
    int eleva_ao_quadrado(int a);
    int eleva_ao_cubo(int a);

    void imprime_info();
};

#endif