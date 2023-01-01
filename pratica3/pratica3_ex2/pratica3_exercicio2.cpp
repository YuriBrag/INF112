#include <iostream>
#include "data.h"

int main() {

    Data d1 (17, 4 , 2004);

    d1.exibirDataFormatoNumero();
    d1.exibirDataPorExtenso () ;
    d1.getDataEmSegundos();

    return 0;
}