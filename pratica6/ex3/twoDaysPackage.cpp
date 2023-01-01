#include "twoDaysPackage.h"
#include "package.h"

TwoDaysPackage::TwoDaysPackage(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg, unsigned int tx): 
    Package(name, adress, kilogram, costPerKg), tx(tx) {};

double TwoDaysPackage::calculateCost() {
    return Package::calculateCost() + tx;
}