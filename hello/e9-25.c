#include <stdio.h>
#include<math.h>
double f1(double x)
{
    return 1 + x * x;
}

double f2(double x)
{
    return 1 + x + x * x + x * x * x;
}

double f3(double x) 
{
    return x / (1 + x * x);
}

double integral(double (*f)(double), double a, double b)
{
    int n , i;
    double h,s,y;
    
    s = ((*f)(a) + (*f)(b)) / 2.0;
    n=100;
    h = (b - a) / n;
    for (i = 1; i < n; i++)
    {
        s = s+ (*f)(a + i * h);
    }
    y = s * h;
    return y;
}

int main()
{
    printf("f(1)=%6.2f\n", integral(f1, 0.0, 1.0));
    printf("f(2)=%6.2f\n", integral(f2, 0.0, 2.0));
    printf("f(3)=%6.2f\n", integral(f3, 0.0, 3.5));
    printf("\n%6.2f\n",sin(0.5));
}