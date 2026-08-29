//This program demonstrates the use of pointers and references in C++. It initializes an integer variable `numero` with the value 10, creates a pointer `ponteiro` that points to `numero`, and a reference `referencia` that refers to `numero`. The program then prints the value of `numero`, the address stored in `ponteiro`, and the value pointed to by `ponteiro`. After modifying the value pointed to by `ponteiro`, it prints the updated value of `numero`.

#include <iostream>
using namespace std;

int numero = 10;
int *ponteiro = &numero;
int &referencia = numero;

int main()
{

    cout << "numero: " << numero << endl;    // 10
    cout << "ponteiro: " << ponteiro << endl;  // endereco de memoria
    cout << "valor apontado: " << *ponteiro << endl; // 10
    *ponteiro = 25;
    cout << "numero (apos modificacao): " << numero << endl; // 25
}