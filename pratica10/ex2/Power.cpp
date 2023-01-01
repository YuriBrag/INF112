#include "Power.h"

Power::Power(/* args */)
{
}

Power::~Power()
{
}

int Power::CalcPower(int k, int n)
{
    int m = 1;
    if (n == 0)
    {
        return 1;
    }

    return (m * k) * CalcPower(k, n - 1);
}