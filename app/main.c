#include <stdio.h>

#include "myfunc.h"
#include "quadratic_e.h"

int main()
{
    printf("Hello World!\n");
    double a, b, c;
    printf("Enter a: ");
    (void)scanf("%lf", &a);
    printf("Enter b: ");
    (void)scanf("%lf", &b);
    printf("Enter c: ");
    (void)scanf("%lf", &c);
    quad_e(a, b, c);
    return myfunc(2);
}
