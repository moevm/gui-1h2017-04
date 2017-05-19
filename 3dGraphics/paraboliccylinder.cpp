#include "paraboliccylinder.h"

ParabolicCylinder::ParabolicCylinder(float P, float Y0) {
    const int prec_x = 60, prec_y = 60;
    int i = 0, j = 0;
    p = P;
    y0 = Y0;
    int pole = 400;

    for (double x = -pole; floor(x * 10000 + 0.5) / 10000 < pole; x += (double)pole * 2 / (double)prec_x) {
        j = 0;
        setX(i, x);
        for (double y = -pole; floor(y * 10000 + 0.5) / 10000 < pole; y += (double)pole * 2 / (double)prec_y) {
            setY(j, y);
            setZ(i, j, pow(y + y0, 2) - 2 * p * x);
            j++;
        }
        i++;
    }
}
