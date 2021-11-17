#include <iostream>
#include "vetor.hpp"
#include "xey.hpp"
#include "soma.hpp"
#include "chave.hpp"
#include "matriz.hpp"

//Guilherme Andrade e Chaves

int main()
{
      int continuar = 1;

    do
    {
        printf("\n\tEscolha a opção desejada\n\n");
        printf("1. Questão 1 \n");
        printf("2. Questão 2 \n");
        printf("3. Questão 3 \n");
        printf("4. Questão 4 \n");
        printf("5. Questão 5 \n");
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