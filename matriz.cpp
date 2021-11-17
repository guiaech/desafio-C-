#include <iostream>
#include "matriz.hpp"
using namespace std;

int matrizm()
{
    int matriz[2][2];

    cout << "Escreva item da chave [0] [0]" << endl;
    cin >> matriz[0][0];
    cout << "Escreva item da chave [0] [1]" << endl;
    cin >> matriz[0][1];
    cout << "Escreva item da chave [1] [0]" << endl;
    cin >> matriz[1][0];
    cout << "Escreva item da chave [1] [1]" << endl;
    cin >> matriz[1][1];

    int x = matriz[0][0];
    int y = matriz[1][1];
    int a = matriz[0][1];
    int b = matriz[1][0];

    int principal = x * y;
    int secundaria = a * b;

    int resultado = principal - secundaria;

    cout << resultado << endl;

    return 0;
}