#include <iostream>
#include "chave.hpp"
using namespace std;

#define MAX1 20;

int chaves()
{
    int vetor[20], i, valor;

    for (i = 0; i < MAX1)
    {
        cout << "Escreva o valor para a chave " << i << endl;
        cin >> valor;
        vetor[i] = valor;
        i++;
    }

    int chave;

    cout << "Qual chave quer buscar? " <<endl;
    cin >> chave;

    cout << vetor[chave]<< endl;

    return 0;

}