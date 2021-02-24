#include <stdio.h>
#include <math.h>

void function();
double x, y;
void main ()
{
    x = 9;
    function(x);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", y);
    printf("x =");
    scanf("%lf", &x);
    function(x);
    printf("f = %.4lf", y);
}
void function()
{
    y = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
}