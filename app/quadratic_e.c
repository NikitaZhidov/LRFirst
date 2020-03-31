#include "quadratic_e.h"
#include <math.h>
#include <stdio.h>

double quad_e(double a, double b, double c, double* x_1, double* x_2){
    double x1, x2;
    double sD, D;
    int count = 0;

    if (a == 0 && b == 0){
        *x_1 = 0; *x_2 = 0;
        printf("No roots\n");
        return count;
    }
    else if (a == 0){
        *x_2 = 0;
        *x_1 = (-1*c)/b;
        printf("x = %lf\n", *x_1);
        count = 1;
        return count;
    }

    D = b*b -4*a*c;

    if (D < 0){
        *x_1 = 0; *x_2 = 0;
        printf("No roots\n");
        count = 0;
        return count;
    }

    sD  = sqrt(D);


    x1 = (-1*b + sD)/(2*a);
    x2 = (-1*b - sD)/(2*a);

    *x_1 = x1;
    *x_2 = x2;
    if (x1 == x2)
        count = 1;
    else
        count = 2;

    return count;
}
