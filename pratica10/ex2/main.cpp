#include <iostream>
#include "Power.h"

int main(void)
{
    Power w;

    int k, n;

    std::cout << "Digite o valor da base: ";
    std::cin >> k;
    std::cout << "Digite o valor do expoente: ";
    std::cin >> n;

    std::cout << w.CalcPower(k, n) << std::endl;
}