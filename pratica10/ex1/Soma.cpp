#include <iostream>
#include "Soma.h"

Soma::Soma()
{
}

Soma::~Soma(){};

double Soma::CalcSoma(double max, double n)
{
    double s = 0;
    if (n == max)
    {
        return n;
    }

    return (s + n) + CalcSoma(max, n + 1);
}
