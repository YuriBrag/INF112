#include <iostream>
#include "package.h"
#include "twoDaysPackage.h"
#include "overnightPackage.h"

int main(void){
    Package package("Pacote 1", "Rua dos Passos, 71", 20, 15);

    TwoDaysPackage two_Days_Package("Pacote 2", "Av. PH Holfs, s/n", 5, 15, 10);

    OverNightPackage over_Night_Package("Pacote 3", "Av. Santa Rita , 110", 50, 15, 15);

    std::cout << package.calculateCost() << std::endl;

    std::cout << two_Days_Package.calculateCost() << std::endl;

    std::cout << over_Night_Package.calculateCost() << std::endl;
}