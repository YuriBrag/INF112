#include <iostream>
#include "PosicoesVetor.h"

int main(void) {
    int y = 0;
    
    std::cout << "Digite o tamanho do vetor: " << std::endl;
    std::cin >> y;

    PosicoesVetor v(y);
    try
    {
        v.preencherValores();
    }
    catch(const std::exception &InvalidPosition)
    {
        std::cerr << InvalidPosition.what() << '\n';
    }
    
}