#include "onesheetedhyperboloid.h"

OneSheetedHyperboloid::OneSheetedHyperboloid(float A, float B, float C, float X0, float Y0, float Z0, float Alpha) {
    const int prec_x = 60, prec_y = 60;
    int i = 0, j = 0;
    a = A;
    b = B;
    c = C;
    x0 = X0;
    y0 = Y0;
    z0 = Z0;
    int pole = 400, qwe = 10000;

    for (double x = -pole; floor(x * qwe + 0.5) / qwe < pole; x += (double)pole * 2 / (double)prec_x) {
        j = 0;
        setX(i, x);
        for (double y = -pole; floor(y * qwe + 0.5) / qwe < pole; y += (double)pole * 2 / (double)prec_y) {
            //if (a * pow(x + x0, 2) + b * pow(y + y0, 2) - 1 > -1) {
            //    setX(i, x);
                setY(j, y);
                setZ(i, j, sqrt(a * pow(x + x0, 2) + b * pow(y + y0, 2) - 1) / c - z0);
                j++;
            //}
        }
        i++;
    }

    draw(Alpha);

    i = 0;
    for (double x = -pole; floor(x * qwe + 0.5) / qwe < pole; x += (double)pole * 2 / (double)prec_x) {
        j = 0;
        setX(i, x);
        for (double y = -pole; floor(y * qwe + 0.5) / qwe < pole; y += (double)pole * 2 / (double)prec_y) {
            setY(j, y);
            setZ(i, j, -sqrt(a * pow(x + x0, 2) + b * pow(y + y0, 2) - 1) / c - z0);
            j++;
        }
        i++;
    }
}
