#include <iostream>
#include "ExcecaoSoma.h"

int main(void)
{
    double max;

    std::cin >> max;

    ExcecaoSoma es(max);
    try
    {
        es.somaValores();
    }
    catch (const std::exception &ExcecaoAcimaDeX)
    {
        std::cerr << ExcecaoAcimaDeX.what() << '\n';
    }
}