#include <iostream>
#include "MDC.h"

int main(void)
{
    MDC w;

    int x, y, l;

    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    l = x;

    std::cout << w.CalcMDC(x, y, l) << std::endl;
}