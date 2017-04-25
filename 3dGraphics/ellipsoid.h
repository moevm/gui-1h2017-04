#ifndef ELLIPSOID_H
#define ELLIPSOID_H
#include "graph.h"

class Ellipsoid : public Graph
{
    float a;
    float b;
    float c;
    float x0;
    float y0;
    float z0;
public:
    Ellipsoid(float A, float B, float C, float X0, float Y0, float Z0);
};

#endif // ELLIPSOID_H
