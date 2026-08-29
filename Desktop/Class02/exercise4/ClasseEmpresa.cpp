#include "ClasseEmpresa.h"
#include <iostream>
using namespace std;

Empresa::Empresa(string n, FuncionarioCaixa f1, FuncionarioCaixa f2) {
    nome = n;
    funcionario1 = f1;
    funcionario2 = f2;
}

void Empresa::setNome(string n) { nome = n; }
string Empresa::getNome() { return nome; }

void Empresa::setFuncionario1(FuncionarioCaixa f1) { funcionario1 = f1; }
FuncionarioCaixa Empresa::getFuncionario1() { return funcionario1; }

void Empresa::setFuncionario2(FuncionarioCaixa f2) { funcionario2 = f2; }
FuncionarioCaixa Empresa::getFuncionario2() { return funcionario2; }

void Empresa::imprime_info() {
    cout << "== EMPRESA ==" << endl;
    cout << "Nome da Empresa: " << nome << endl << endl;
    cout << "[Funcionario 1]" << endl;
    funcionario1.imprime_info();
    cout << endl << "[Funcionario 2]" << endl;
    funcionario2.imprime_info();
    cout << "\n Processo finalizado." << endl;
}