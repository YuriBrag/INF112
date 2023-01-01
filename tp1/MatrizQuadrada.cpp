#include <iostream>
#include "MatrizQuadrada.h"

MatrizQuadrada::MatrizQuadrada(int n) {
    _n = n;
    value = new int *[n]; //define a quantidade de linhas da matriz, para que depois sejam alocados os vetores para cada linha

    for (int i = 0; i < n; i++) {
        value[i] = new int [n]; //cria um vetor de n posi na linha i da matriz
    }
}

void MatrizQuadrada::leMatriz() { //n precisa de receber int n pq já está dentro do objeto
    std::cout << " Digite cada valor da matriz" << std::endl;
    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) {
            std::cin >> value[i][j];
        }
    }   
}

void MatrizQuadrada::imprimeMatriz() { //n precisa de receber int n pq já está dentro do objeto
    std::cout << " A matriz e:" << std::endl;
    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) {
            std::cout << " " << value[i][j];
        }
        std::cout << std::endl;
    }   
}

void MatrizQuadrada::criaMatrizIdentidade() { //n precisa de receber int n pq já está dentro do objeto
    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) {
            if (i == j) {
                value[i][j] = 1;
            }
            else {
                value[i][j] = 0;
            }
        }
    }   
}

void MatrizQuadrada::produto(MatrizQuadrada x, MatrizQuadrada y) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    double somaProd = 0;
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            for (k = 0; k < _n; k++) {
                somaProd += x.value[i][k] * y.value[j][k];
            }
            value[j][i] = somaProd;
            somaProd = 0;
        }
    }   
}

bool MatrizQuadrada::compara(MatrizQuadrada x) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0;
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            if(value[i][j] != x.value[i][j]){
                return false;
            }
        }
    }
    return true;   
}

void MatrizQuadrada::soma(MatrizQuadrada x, MatrizQuadrada y) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            value[i][j] = x.value[i][j] + y.value[i][j];
        }
    }   
}
void MatrizQuadrada::criaTransposta(MatrizQuadrada x) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            value[i][j] = x.value[j][i];
        }
    }   
}
