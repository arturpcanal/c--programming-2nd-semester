#include <iostream>
#include "Calculadora.h"
#include "FuncionarioCaixa.h"
#include "ClasseEmpresa.h"
using namespace std;

int main() {
    Calculadora calc1("Cassio SixPlusSeven");
    Calculadora calc2("Inter EssantePlus");

    FuncionarioCaixa f1("Artur Pires Canal", "Rua Sessenta e Sete, 67", calc1);
    FuncionarioCaixa f2("Lara Consensa Nunes", "Av Victor Barreto, 2288", calc2);

    cout << "== Operacoes do Funcionario 1 ==" << endl;
    cout << "2 + 2 = " << f1.soma(2, 2) << endl;
    cout << "5 - 4 = " << f1.subtrai(5, 4) << endl;
    cout << "2 x 3 = " << f1.multiplica(2, 3) << endl;

    cout << endl;

    cout << "== Operacoes do Funcionario 2 ==" << endl;
    cout << "6 / 3 = " << f2.divide(6, 3) << endl;
    cout << "7 + 2 = " << f2.soma(7, 2) << endl;
    cout << "8 x 3 = " << f2.multiplica(8, 3) << endl;

    cout << endl;

    Empresa minhaEmpresa("Apis ST", f1, f2);
    minhaEmpresa.imprime_info();

    return 0;
}