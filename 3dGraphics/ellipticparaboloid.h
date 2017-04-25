#ifndef ELLIPTICPARABOLOID_H
#define ELLIPTICPARABOLOID_H
#include "graph.h"

class EllipticParaboloid : public Graph
{
    float a;
    float b;
    float x0;
    float y0;
public:
    EllipticParaboloid(float A, float B, float X0, float Y0);
};

#endif // ELLIPTICPARABOLOID_H
