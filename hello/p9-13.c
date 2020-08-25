#include <stdio.h>
#include <math.h>

double f1(double x)
{
    return sin(x);
}

double f2(double x)
{
    return cos(x);
}

double f3(double x)
{
    return exp(x);
}

double integral(double (*p)(double), double a, double b)
{
    int i, n = 100;
    double h = (b - a) / n;
    double s = 0;
    for (i = 0; i < n; i++)
    {
        s = s + (*p)(a + i * h);
    }
    s = s * h;
    return s;
}

int main()
{
    printf("%6.2f",f3(1));
   printf("%6.2f\n", integral(f1, 0.0, 1.0));
   printf("%6.2f\n", integral(f2, 0.0, 1.0));
   printf("%6.2f\n", integral(f3, 0.0, 1.0));
}