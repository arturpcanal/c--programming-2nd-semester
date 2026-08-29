// This program defines a class called "Produto" that represents a product with attributes for its name, price, and stock quantity.

#include <iostream>
#include <string>
using namespace std;

class Produto
{
public:
    string nome;
    double preco;

private:
    int quantidadeEstoque = 0;

public:
    void exibirInformacoes()
    {
        cout << "\n--- PRODUTO ---" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Quantidade em estoque: " << quantidadeEstoque << endl;
    }

    void adicionarEstoque(int quantidade)
    {
        quantidadeEstoque += quantidade;

        cout << "\nForam adicionadas " << quantidade << " unidades." << endl;
    }

    void removerEstoque(int quantidade)
    {
        if (quantidade > quantidadeEstoque)
        {
            cout << "\nNao eh possivel remover essa quantidade." << endl;
            cout << "Estoque disponivel: " << quantidadeEstoque << endl;
        }
        else
        {
            quantidadeEstoque -= quantidade;

            cout << "\nForam removidas " << quantidade << " unidades." << endl;
        }
    }
};

int main()
{
    Produto produto1;
    produto1.nome = "Teclado";
    produto1.preco = 150;

    Produto produto2;
    produto2.nome = "Mouse";
    produto2.preco = 100.;

    cout << "=== PRODUTO 1 ===" << endl;
    produto1.exibirInformacoes();

    cout << "\nAdicionando estoque..." << endl;
    produto1.adicionarEstoque(10);
    produto1.exibirInformacoes();

    cout << "\nRemovendo estoque..." << endl;
    produto1.removerEstoque(3);
    produto1.exibirInformacoes();

    cout << "\nTentando remover mais do que existe no estoque..." << endl;
    produto1.removerEstoque(67);
    produto1.exibirInformacoes();

    cout << "\n\n=== PRODUTO 2 ===" << endl;
    produto2.exibirInformacoes();

    cout << "\nAdicionando estoque..." << endl;
    produto2.adicionarEstoque(77);
    produto2.exibirInformacoes();

    cout << "\nRemovendo estoque..." << endl;
    produto2.removerEstoque(10);
    produto2.exibirInformacoes();

    return 0;
}