#include <iostream>
#include "cubo.h"

Cubo::Cubo (float aresta) {
    _aresta = aresta; //atribui o aresta recebido da main a _aresta da classe
}

float Cubo::calculaLadoCubo() { //retorna o lado do cubo a partir da aresta
    return _aresta * _aresta;
}

float Cubo::calculaAreaCubo() {
    return calculaLadoCubo() * 6;
}

float Cubo::calculaVolumeCubo() { //usa o metodo calculaLadoCubo dentro de si para calcular o volume
    return calculaLadoCubo() * _aresta;
}

