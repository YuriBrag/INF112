#include <iostream>
#include "MatrizQuadrada.h"

MatrizQuadrada::MatrizQuadrada(int n) {
    _n = n;
    value = new int *[n]; //define a quantidade de linhas da matriz, para que depois sejam alocados os vetores para cada linha

    for (int i = 0; i < n; i++) {
        value[i] = new int [n]; //cria um vetor de n posicoes na linha i da matriz
    }
}

MatrizQuadrada::~MatrizQuadrada() {
}

void MatrizQuadrada::leMatriz() { //n precisa de receber int n pq já está dentro do objeto
    
    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) {
            std::cin >> value[i][j];
        }
    }   
}

void MatrizQuadrada::imprimeMatriz() { //n precisa de receber int n pq já está dentro do objeto

    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) {
            std::cout << " " << value[i][j];
        }
        std::cout << std::endl;
    }   
}

void MatrizQuadrada::criaMatrizIdentidade() { //n precisa de receber int n pq já está dentro do objeto
    for (int i = 0; i < _n; i++) {
        for (int j = 0; j < _n; j++) { //vai percorrer a matriz atribuindo um aonde j=i, ou seja a diagonal principal, e zero nos demais
            if (i == j) {
                value[i][j] = 1;
            }
            else {
                value[i][j] = 0;
            }
        }
    }   
}

void MatrizQuadrada::produto(MatrizQuadrada x, MatrizQuadrada y) { //nao precisa receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    double somaProd = 0;
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            for (k = 0; k < _n; k++) {
                somaProd += x.value[i][k] * y.value[j][k]; //vai fazer a soma dos produtos da linha de uma com a coluna da outra e atribuir a somaProd
            }
            value[j][i] = somaProd; //atribui a soma prod a cada posicao da matriz resultante
            somaProd = 0; //zera a soma dos produtos para que se possa fazer a da proxima posicao da matriz resultado
        }
    }   
}

bool MatrizQuadrada::compara(MatrizQuadrada x) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0;
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            if(value[i][j] != x.value[i][j]){ //vai percorrer as duas matrizes e compara-las na mesma posicao e se for diferente retorna falso
                return false;
            }
        }
    }
    return true; //se ela ja comparou todas as posicoes e nao retornou falso em nenhuma, as duas matrizes sao iguais 
}

void MatrizQuadrada::soma(MatrizQuadrada x, MatrizQuadrada y) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            value[i][j] = x.value[i][j] + y.value[i][j]; //percorre as duas matrizes que se quer somar e atribui a posicao i, j da nova matriz a soma das outras
        }
    }   
}
void MatrizQuadrada::criaTransposta(MatrizQuadrada x) { //n precisa de receber int n pq já está dentro do objeto
    int i = 0, j = 0, k = 0;
    
    for (i = 0; i < _n; i++) {
        for (j = 0; j < _n; j++) {
            value[i][j] = x.value[j][i]; //percorre a matriz trocando a linha pela coluna, tornando-se a transposta
        }
    }   
}
