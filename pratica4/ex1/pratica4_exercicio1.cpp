#include <iostream>
#include "listaVetor.h"

int main()
{
    int nEle, n;
    std::cout << "Quantos numeros serao inseridos?" << std::endl;

    std::cin >> nEle;
    ListaVetor l1(nEle);
    for (int i = 0; i < nEle; i++)
    {
        std::cin >> n;
        l1.inserirElemento(i, n);
    }

    l1.imprime();

    l1.removePrimeiro();
    l1.imprime();

    l1.removeUltimo();
    l1.imprime();

    l1.inverte();
    l1.imprime();

    return 0;
}