#include "Calculadora.h"
#include <iostream>
using namespace std;

Calculadora::Calculadora(string mod) {
    modelo = mod;
}

float Calculadora::soma(float a, float b) {
    return a + b;
}

float Calculadora::subtrai(float a, float b) {
    return a - b;
}

float Calculadora::multiplica(float a, float b) {
    return a * b;
}

float Calculadora::divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    cout << "Erro: Divisao por zero. Tente novamente." << endl;
    return 0;
}

int Calculadora::eleva_ao_quadrado(int a) {
    return a * a;
}

int Calculadora::eleva_ao_cubo(int a) {
    return a * a * a;
}

void Calculadora::imprime_info() {
    cout << "Modelo da Calculadora: " << modelo << endl;
}