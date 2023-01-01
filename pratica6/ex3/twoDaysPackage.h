#ifndef INF112_TWODAYSPACKAGE_H
#define INF112_TWODAYSPACKAGE_H

#include "package.h"

class TwoDaysPackage: public Package {
    protected:
        unsigned int tx;
    public:
        TwoDaysPackage(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg, unsigned int tx);

        double calculateCost();
};

#endif