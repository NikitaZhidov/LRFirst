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
    printf("%lf\n", quad_e(a, b, c));
    return myfunc(2);
}
