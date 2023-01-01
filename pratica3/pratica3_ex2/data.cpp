#include <iostream>
#include <iomanip>
#include "data.h"

Data::Data(int d, int m, int y){
    _d = d;
    _m = m;
    _y = y;
}

void Data::exibirDataFormatoNumero() {
    std::cout << _d << '/' << _m << '/' << _y << std::endl;
}

void Data::exibirDataPorExtenso() {

    std::cout << _d;

    switch (_m) {
        case 1:
            std::cout << " de Janeiro de ";
            break;
        case 2:
            std::cout << " de Fevereiro de ";
            break;
        case 3:
            std::cout << " de Marco de ";
            break;
        case 4:
            std::cout << " de Abril de ";
            break;
        case 5:
            std::cout << " de Maio de ";
            break;
        case 6:
            std::cout << " de Junho de ";
            break;
        case 7:
            std::cout << " de Julho de ";
            break;
        case 8:
            std::cout << " de Agosto de ";
            break;
        case 9:
            std::cout << " de Setembro de ";
            break;
        case 10:
            std::cout << " de Outubro de ";
            break;
        case 11:
            std::cout << " de Novembro de ";
            break;
        case 12:
            std::cout << " de Dezembro de ";
            break;
    }

    std::cout << _y << std:: endl;
}

void Data::getDataEmSegundos() {
    int sec = 0;
    sec += 86400 * _d;
    sec += (86400 * 30) * _m;
    sec += (86400 * 365) * (_y - 1970);

    std::cout << sec <<  " Segundos desde 1970" <<std:: endl;
}