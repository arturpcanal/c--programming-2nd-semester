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
        cout << "Profissao: " << profissao << endl;
    }
};

int main()
{
    Pessoa pessoa1;

    cout << "========================" << endl;
    cout << "       CADASTRO 1" << endl;
    cout << "========================" << endl;

    cout << "Nome: ";
    cin >> pessoa1.nome;

    cout << "Idade: ";
    cin >> pessoa1.idade;

    cout << "Profissao: ";
    cin >> pessoa1.profissao;

    cout << "\n--- DADOS DA PESSOA 1 ---" << endl;
    pessoa1.apresentar();


    Pessoa pessoa2;

    cout << "\n\n========================" << endl;
    cout << "       CADASTRO 2" << endl;
    cout << "========================" << endl;

    cout << "Nome: ";
    cin >> pessoa2.nome;

    cout << "Idade: ";
    cin >> pessoa2.idade;

    cout << "Profissao: ";
    cin >> pessoa2.profissao;

    cout << "\n--- DADOS DA PESSOA 2 ---" << endl;
    pessoa2.apresentar();

    return 0;
}