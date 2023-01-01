#include<iostream>
#include <ctype.h>
#include <stdlib.h>
#include "PosicoesVetor.h"
#include "InvalidPosition.h"

PosicoesVetor::PosicoesVetor(int y)
{
    this-> value = new int[y];
    this-> y = y;
}

PosicoesVetor::~PosicoesVetor()
{
}

void PosicoesVetor::preencherValores() {
    for (int i = 0; i < y; i++) {
        value[i] = 0;
    }
    
    int i = 0;
    while (i < y) {
        int n;
        int p;

        char nChar[5];
        char pChar[5];
        
        std :: cin >> nChar >> pChar;

        if (!isdigit(*nChar) || !isdigit(*pChar)) {
            throw std::invalid_argument("Valor inserido nao e um numero!");
        }
        else {
            n = atoi(nChar);
            p = atoi(pChar);
        }
        
        if (p > y || p < 0)
        {
            throw InvalidPosition();
        }
        else {
            value[p] = n;
        }
        i++;
    }

    for (int i = 0; i < y; i++) {
        std::cout << value[i] << std::endl;
    }
    
    delete [] value;
}
