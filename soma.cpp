#include <iostream>
#include "soma.hpp"
using namespace std;

#define MAX2 10;

int soma()
{
    int valor;
    int i, vetor[10], soma;

    for (i = 0; i < MAX2)
    {
        cout << "Insira um numero inteiro: ";
        cin >> valor;
        vetor[i] = valor;
        soma = soma + valor;
        i++;
    }

    cout << "A soma dos números da o total de " << soma << endl;

    return 0;
}