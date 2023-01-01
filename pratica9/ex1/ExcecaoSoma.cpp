#include <iostream>
#include "ExcecaoSoma.h"
#include "ExcecaoAcimaDeX.h"

ExcecaoSoma::ExcecaoSoma(double max)
{
    this->max = max;
}

ExcecaoSoma::~ExcecaoSoma()
{
}

void ExcecaoSoma::somaValores()
{
    double soma = 0, s = 0;
    int n = 0;
    while (true)
    {
        std::cin >> s;
        if (s <= 0 || s > 100)
        {
            throw std::invalid_argument("Valor inserido menor que zero ou maior o que cem!");
        }
        else if ((soma + s) <= max)
        {
            soma += s;
            n++;
        }
        else if ((soma + s) > max)
        {
            std::cout << "Soma: " << soma << std::endl;
            std::cout << "Quantidade de numeros somados: " << n << std::endl;
            std::cout << "Media: " << soma / n << std::endl;
            throw ExcecaoAcimaDeX();
        }
    }
};
