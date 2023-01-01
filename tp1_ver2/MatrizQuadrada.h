#include <iostream>

struct MatrizQuadrada {
    int _n; //diz respeito a ordem da matriz quadrada
    int **value; //a matriz propriamente dita

    MatrizQuadrada(int n);

    ~MatrizQuadrada();

    void leMatriz();

    void criaMatrizIdentidade() ;

    void produto(MatrizQuadrada a, MatrizQuadrada b);

    bool compara(MatrizQuadrada a);

    void imprimeMatriz();

    void criaTransposta (MatrizQuadrada a);

    void soma(MatrizQuadrada a, MatrizQuadrada b);
};
