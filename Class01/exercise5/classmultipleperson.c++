//This program allows the user to register and present information about five different people. 
//It uses a class called "Pessoa" to encapsulate the attributes and methods related to a person, including their name, age, and profession. 
//The program prompts the user to input this information for each person and then displays it back to the user.

#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;
    string profissao;

    void cadastrar(int numero)
    {
        cout << "\n--- CADASTRO DA PESSOA " << numero << " ---\n";

        cout << "Seu Nome: ";
        getline(cin, nome);

        cout << "Sua Idade: ";
        cin >> idade;
        cin.ignore();

        cout << "Sua Profissao: ";
        getline(cin, profissao);
    }

    void apresentar(int numero)
    {
        cout << "\n--- PESSOA " << numero << " ---" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Profissao: " << profissao << endl;
    }
};

int main()
{
    Pessoa pessoa1;
    pessoa1.cadastrar(1);
    pessoa1.apresentar(1);

    Pessoa pessoa2;
    pessoa2.cadastrar(2);
    pessoa2.apresentar(2);

    Pessoa pessoa3;
    pessoa3.cadastrar(3);
    pessoa3.apresentar(3);

    Pessoa pessoa4;
    pessoa4.cadastrar(4);
    pessoa4.apresentar(4);

    Pessoa pessoa5;
    pessoa5.cadastrar(5);
    pessoa5.apresentar(5);

    return 0;
}