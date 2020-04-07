#include <stdio.h>

#include "myfunc.h"
#include "quadratic_e.h"

int main()
{
    printf("Hello World!\n");
    double a, b, c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    double x1;
    double x2;
    int count;
    count = quad_e(a, b, c, &x1, &x2);
    printf("x1 = %lf  x2 = %lf\n", x1, x2);
    printf("Number of roots: %d\n", count);
    return myfunc(2);
}
