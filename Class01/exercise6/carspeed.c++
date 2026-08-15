// This program defines a class called "Carro" that represents a car with attributes for its brand, model, and speed.

#include <iostream>
#include <string>
using namespace std;

class Carro
{
public:
    string marca;
    string modelo;

private:
    int velocidade = 0;

public:
    void acelerar()
    {
        velocidade += 10;
        cout << "Acelerando na infinita highway... Velocidade: " << velocidade << " km/h" << endl;
    }

    void frear()
    {
        velocidade -= 10;

        if (velocidade < 0)
        {
            velocidade = 0;
        }

        cout << "Freando! Carro na frente não sai da pista da esquerda...  Velocidade: " << velocidade << " km/h" << endl;
    }

    void exibirVelocidade()
    {
        cout << "Velocidade atual: " << velocidade << " km/h" << endl;
    }
};

int main()
{
    Carro carro;

    carro.marca = "Ford";
    carro.modelo = "Ka";

    cout << "Marca: " << carro.marca << endl;
    cout << "Modelo: " << carro.modelo << endl;

    cout << "\nVelocidade inicial:" << endl;
    carro.exibirVelocidade();

    cout << "\nAcelerando:" << endl;
    carro.acelerar();

    cout << "\nFreando:" << endl;
    carro.frear();

    cout << "\nFreando novamente:" << endl;
    carro.frear();

    cout << "\nVelocidade final:" << endl;
    carro.exibirVelocidade();

    return 0;
}