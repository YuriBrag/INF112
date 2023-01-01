#ifndef INF112_PACKAGE_H
#define INF112_PACKAGE_H

#include <string>

class Package {
    private:
        std::string name;
        std::string adress;
        unsigned int kilogram;
        unsigned int costPerKg;
    public:
        Package(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg);

        void setPackage(std::string name, std::string adress, unsigned int kilogram, unsigned int costPerKg);

        std::string getNamePackage();
        std::string getAdressPackage();

        int getWeightPackage();
        double calculateCost();

};

#endif