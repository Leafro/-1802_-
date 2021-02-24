#include <stdio.h>
#include <math.h>
double function(double x)
{
    double f;
    f = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
    return(f);
}