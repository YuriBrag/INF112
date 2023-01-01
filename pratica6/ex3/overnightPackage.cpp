#include "overnightPackage.h"
#include "package.h"

OverNightPackage::OverNightPackage(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg, unsigned int txPerKg): 
    Package(name, adress, kilogram, costPerKg), txPerKg(txPerKg) {};

double OverNightPackage::calculateCost() {
    return Package::calculateCost() + (txPerKg * Package::getWeightPackage());
}