#include <iostream>
#include "Soma.h"

int main(void)
{
    Soma w;

    double max, n;

    std::cout << "Digite o valor maximo: ";
    std::cin >> max;
    std::cout << "Digite o valor inicial: ";
    std::cin >> n;

    std::cout << w.CalcSoma(max, n) << std::endl;
}