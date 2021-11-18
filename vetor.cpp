#include <iostream>
#include "headers.hpp"
using namespace std;

#define MAX3 10;

int cubo(int &valor)
{
    int resultado;
    resultado = valor * valor * valor;
    return resultado;
}

int vetor1()
{
    int valor;
    int i, vetor[10];

    for (i = 0; i < MAX3)
    {

        cout << "Insira um numero inteiro: ";
        cin >> valor;
        valor = cubo(valor);

        vetor[i] = valor ;
        i++;
    }

        for (i = 0; i < MAX3)
     {

        cout << "Número inserido ao cubo fica \n"<< vetor[i] << endl;
        i++;
     }

    return 0;

}