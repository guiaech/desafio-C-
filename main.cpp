#include <iostream>
#include "headers.hpp"

//Guilherme Andrade e Chaves

int main()
{
      int continuar = 1;

    do
    {
        printf("\n\tEscolha a opção desejada\n\n");
        printf("1. Questão 1 (Vetor 10 posições elevados ao cubo)\n");
        printf("2. Questão 2 (Vetor X e Y com as funções de Y)\n");
        printf("3. Questão 3 (Soma dos valores do vetor)\n");
        printf("4. Questão 4 (Busca de chave no vetor)\n");
        printf("5. Questão 5 (Matriz com resultado da determinante)\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch (continuar)
        {
        case 1:
            vetor1();
            break;

        case 2:
            xey();
            break;

        case 3:
            soma();
            break;

        case 4:
            chaves();
            break;

        case 5:
            matrizm();
            break;

        default:
            printf("Digite uma opcao valida\n");
        }
    } while (continuar);
}