// This program is a simple C++ application that collects and displays information about a student, including their name, age, and semester of study.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    int semestre;

    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite o semestre do curso: ";
    cin >> semestre;

    cout << "\n--- Dados do estudante (jovem talento) ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Semestre: " << semestre << endl;

    return 0;
}