#include <stdio.h>
#include <math.h>

double function(double x)
{
    double f;
    f = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
    return(f);
}

void main()
{
    double f, x = 9;
    f = function(x);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    printf("x = ");
    scanf("%lf", &x);
    f = function(x);
    printf("f = %.4lf", f);
}
