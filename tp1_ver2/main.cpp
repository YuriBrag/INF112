#include <iostream>
#include "MatrizQuadrada.h"

int main() {
    int n;

    std::cout << " Qual o tamanho das matrizes?" << std::endl;

    std::cin >> n;

    MatrizQuadrada *M1 = new MatrizQuadrada(n); //aloca dinamicamente todas as matrizes
    MatrizQuadrada *M2 = new MatrizQuadrada(n);
    MatrizQuadrada *M3 = new MatrizQuadrada(n); 
    MatrizQuadrada *I = new MatrizQuadrada(n); 
    MatrizQuadrada *R = new MatrizQuadrada(n); 
    MatrizQuadrada *T = new MatrizQuadrada(n);

    std::cout << " Digite os valores da matriz M1" << std::endl;
    M1->leMatriz();

    std::cout << " Digite os valores da matriz M2" << std::endl;
    M2->leMatriz();

    I->criaMatrizIdentidade();

    R->produto(*I, *M1);

    if (M1->compara(*I)) {
        std::cout << " A matriz M1 e igual a identidade!" << std::endl;
    }
    else {
        std::cout << " A matriz M1 e diferente da identidade!" << std::endl;
    }
    
    std::cout << " Matriz produto entre a M1 e a Identidade" << std::endl;
    R->imprimeMatriz();

    T->criaTransposta(*M1);

    M3->soma(*M1, *M2);

    std::cout << " Matriz soma entre a M1 e M2" << std::endl;
    M3->imprimeMatriz();

    std::cout << " Matriz transposta da M1" << std::endl;
    T->imprimeMatriz();

    delete[] M1;
    delete[] M2;
    delete[] M3;
    delete[] T;
    delete[] I;
    delete[] R;
    return 0;
}