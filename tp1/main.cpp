#include <iostream>
#include "MatrizQuadrada.h"

int main() {
    int n;

    std::cout << " Qual o tamanho das matrizes?" << std::endl;

    std::cin >> n;

    MatrizQuadrada M1(n), M2(n), M3(n), I(n), R(n), T(n);

    M1.leMatriz();

    I.criaMatrizIdentidade();

    R.produto(I, M1);

    if (M1.compara(I)) {
        std::cout << " Matriz igual a identidade!" << std::endl;
    }
    else {
        std::cout << " Matriz diferente da identidade!" << std::endl;
    }
    
    M1.imprimeMatriz();
    
    R.imprimeMatriz();

    T.criaTransposta(M1);
    
    M2.leMatriz();

    M3.soma(M1, M2);

    M2.imprimeMatriz();
    M3.imprimeMatriz();
    T.imprimeMatriz();

    return 0;
}