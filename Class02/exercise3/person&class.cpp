// This code defines a class called "Pessoa" that represents a person with attributes such as name, age, height, number of siblings, and address. 
// It includes methods to print the person's information and check if they are an only child. 
// The main function creates three instances of the Pessoa class with different attributes and prints their information along with whether they are only children or not. 

#include <iostream>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    double altura;
    int quantidade_irmaos;
    string endereco;

public:
    Pessoa(string n, int i, double h, int q, string e) : nome(n), idade(i), altura(h), quantidade_irmaos(q), endereco(e) {}

    void imprime_info() const
    {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Altura em cm: " << altura << endl;
        cout << "Quantidade de irmao(s): " << quantidade_irmaos << endl;
        cout << "Endereco: " << endereco << endl;
    }

    bool is_filho_unico() const
    {
        return quantidade_irmaos == 0;
    }
};

int main()
{
    Pessoa pessoa1("Artur", 19, 182, 1, "Rua Sessenta e Sete, 67");
    Pessoa pessoa2("Bruno", 18, 250, 2, "Rua Semipresencial, 201");
    Pessoa pessoa3("Pedro", 20, 185, 0, "Rua Presencial, 200");

    cout << "\n == Informacoes da pessoa 1: ==" << endl;
    pessoa1.imprime_info();
    cout << "Eh filho unico? " << (pessoa1.is_filho_unico() ? "Sim" : "Nao") << endl;

    cout << endl;

    cout << "\n == Informacoes da pessoa 2: ==" << endl;
    pessoa2.imprime_info();
    cout << "Eh filho unico? " << (pessoa2.is_filho_unico() ? "Sim" : "Nao") << endl;

    cout << endl;

    cout << "\n == Informacoes da pessoa 3: ==" << endl;
    pessoa3.imprime_info();
    cout << "Eh filho unico? " << (pessoa3.is_filho_unico() ? "Sim" : "Nao") << endl;

    return 0;
}


