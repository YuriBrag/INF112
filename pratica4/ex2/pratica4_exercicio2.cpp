#include <iostream>
#include "cubo.h"

int main () {
    float a, vol, lado;

    Cubo *cubo = new Cubo(3.0); //alocação dinamica para cubo

    a = cubo->calculaAreaCubo(); //atribui a a o valor retornado da funcao, e como cubo e alocado dinamicamente usa-se o "->" ao inves do usual "."

    vol = cubo->calculaVolumeCubo();

    lado = cubo->calculaLadoCubo();

    std :: cout << "A area: " << a << std :: endl;

    std :: cout << "O volume: "<< vol << std :: endl;

    std :: cout << "O lado: "<< lado << std :: endl;

    delete cubo;
    
    return 0;
}