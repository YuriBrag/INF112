#include "MDC.h"

MDC::MDC(/* args */)
{
}

MDC::~MDC()
{
}

int MDC::CalcMDC(int x, int y, int l)
{

    if (x % l == 0 && y % l == 0)
    {
        return l;
    }

    return CalcMDC(x, y, l - 1);
}
