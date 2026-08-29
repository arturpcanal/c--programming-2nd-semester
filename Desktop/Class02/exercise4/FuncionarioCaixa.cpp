#include "FuncionarioCaixa.h"
#include <iostream>
using namespace std;

FuncionarioCaixa::FuncionarioCaixa() {
    nome = "";
    endereco = "";
}

FuncionarioCaixa::FuncionarioCaixa(string n, string e, Calculadora c) {
    nome = n;
    endereco = e;
    calculadora = c;
}

void FuncionarioCaixa::setNome(string n) { nome = n; }
string FuncionarioCaixa::getNome() { return nome; }

void FuncionarioCaixa::setEndereco(string e) { endereco = e; }
string FuncionarioCaixa::getEndereco() { return endereco; }

void FuncionarioCaixa::setCalculadora(Calculadora c) { calculadora = c; }
Calculadora FuncionarioCaixa::getCalculadora() { return calculadora; }

float FuncionarioCaixa::soma(float a, float b) { return calculadora.soma(a, b); }
float FuncionarioCaixa::subtrai(float a, float b) { return calculadora.subtrai(a, b); }
float FuncionarioCaixa::multiplica(float a, float b) { return calculadora.multiplica(a, b); }
float FuncionarioCaixa::divide(float a, float b) { return calculadora.divide(a, b); }
int FuncionarioCaixa::eleva_ao_quadrado(int a) { return calculadora.eleva_ao_quadrado(a); }
int FuncionarioCaixa::eleva_ao_cubo(int a) { return calculadora.eleva_ao_cubo(a); }

void FuncionarioCaixa::imprime_info() {
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    calculadora.imprime_info();
}