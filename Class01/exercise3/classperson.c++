// This program defines a class called "Pessoa" that represents a person with attributes for their name, age, and profession.

#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;
    string profissao;

    void apresentar()
    {

        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Profissão: " << profissao << endl;
    }

};

    int main()
    {
        Pessoa pessoa1;
        cout << "Nome: ";
        cin >> pessoa1.nome;
        cout << "Idade: ";
        cin >> pessoa1.idade;
        cout << "Profissão: ";
        cin >> pessoa1.profissao;
        pessoa1.apresentar();
        
        return 0;
    }