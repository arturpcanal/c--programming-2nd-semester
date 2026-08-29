// This code defines a class called "Retangulo" that represents a rectangle with attributes such as base and height. 
// It includes methods to get the base and height, and to calculate the area of the rectangle.

#include <iostream>
using namespace std;

class Retangulo
{
private:
    double base;
    double altura;

public:
    Retangulo(double b, double h) : base(b), altura(h) {}

    double pegarBase() const
    {
        return base;
    }

    double pegarAltura() const
    {
        return altura;
    }

    double calcularArea() const
    {
        return base * altura;
    }
};

int main()
{
    Retangulo ret(10.0, 6.7);

    cout << "\n == Informacoes do retangulo super farmador de aura: ==" << endl;
    cout << "Base: " << ret.pegarBase() << endl;
    cout << "Altura: " << ret.pegarAltura() << endl;
    cout << "A multiplicacao para a area fica muito facil professor eh: " << ret.calcularArea() << endl;

    return 0;
};
