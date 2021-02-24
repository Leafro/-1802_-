#include <stdio.h>
#include <math.h>
void main()
{
 double x = 9;
 double f = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
 printf("x = %.4lf\n", x);
 printf("f = %.4lf\n\n", f);
 printf("x = ");
 scanf("%lf", &x);
 f = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));
 printf("f = %.4lf", f);
}