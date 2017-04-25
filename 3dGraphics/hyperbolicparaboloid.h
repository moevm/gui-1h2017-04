#ifndef HYPERBOLICPARABOLOID_H
#define HYPERBOLICPARABOLOID_H
#include "graph.h"

class HyperbolicParaboloid : public Graph
{
    float a;
    float b;
    float p;
    float x0;
    float y0;
public:
    HyperbolicParaboloid(float A, float B, float P, float X0, float Y0);
};

#endif // HYPERBOLICPARABOLOID_H
