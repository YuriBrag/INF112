#include <iostream>

struct Cubo {
    float _aresta; //o que compoe a classe
    
    Cubo(float aresta); //declaracao do metodo construtor

    ~Cubo(); //declaracao do metodo destrutor

    float calculaAreaCubo(); //declaracao do metodo de funcao, pode receber parametros da main

    float calculaVolumeCubo();

    float calculaLadoCubo();
};

