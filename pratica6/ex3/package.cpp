#include "package.h"

Package::Package(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg) {
    this->name = name;
    this->adress = adress;
    this->kilogram = kilogram;
    this->costPerKg = costPerKg;
}

std::string Package::getNamePackage() {
    return name;
}

std::string Package::getAdressPackage() {
    return adress;
}

int Package::getWeightPackage() {
    return kilogram;
}

double Package::calculateCost() {
    return costPerKg * kilogram;
}
