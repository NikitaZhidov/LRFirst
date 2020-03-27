#include "quadratic_e.h"
#include <math.h>
#include <stdio.h>

double quad_e(double a, double b, double c){
    double x1, x2;
    double sD, D;


    D = b*b -4*a*c;

    if (D < 0){
        printf("No roots\n");
        return 0;
    }

    sD  = sqrt(D);


    x1 = (-1*b + sD)/(2*a);
    x2 = (-1*b - sD)/(2*a);

    printf("x1 = %lf || x2 = %lf\n", x1, x2);

    return x1+x2;
}
