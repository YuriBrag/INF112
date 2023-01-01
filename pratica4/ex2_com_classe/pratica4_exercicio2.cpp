#include <iostream>
#include "cubo.h"

int main(void)
{
    double area, volume, lado;
    Cubo *cubo = new Cubo(3.0);

    area = cubo->calculaAreaCubo();
    volume = cubo->calculaVolumeCubo();
    lado = cubo->calculaLado();
    std::cout << "Lado: " << cubo->get_a() << std::endl;
    std::cout << "Area lado: " << lado << std::endl;
    std::cout << "Area total: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    cubo->set_a(5.8);
    area = cubo->calculaAreaCubo();
    volume = cubo->calculaVolumeCubo();
    lado = cubo->calculaLado();
    std::cout << "Lado: " << cubo->get_a() << std::endl;
    std::cout << "Area lado: " << lado << std::endl;
    std::cout << "Area total: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    delete cubo;
};