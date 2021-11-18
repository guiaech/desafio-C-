#include <iostream>
#include "headers.hpp"
using namespace std;

#define MAX5 10;
#define MAX6 3;

int xey()
{
    int valor, x;
    int i, vetorx[10], soma;

    for (i = 0; i < MAX5)
    {
        cout << "Insira um numero inteiro: ";
        cin >> valor;
        vetorx[i] = valor;
        i++;
    }

    for (int j = 0; j < MAX5)
    {
        x = vetorx[j];
        j++;
        int vetory[3];
        vetory[0] = 2 * x + 1;
        vetory[1] = x * x;
        vetory[2] = x * x * x;

        for (i = 0; i < MAX6)
        {
            cout << "O vetor y " << i << endl;
            cout << vetory[i] << endl;
            i++;
        }
    }

    return 0;
}