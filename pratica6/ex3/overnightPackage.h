#ifndef INF112_OVERNIGHTPACKAGE_H
#define INF112_OVERNIGHTPACKAGE_H

#include "package.h"

class OverNightPackage: public Package {
    protected:
        unsigned int txPerKg;
    public:
        OverNightPackage(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg, unsigned int txPerKg);

        double calculateCost();
};

#endif