#ifndef HYPERBOLICCYLINDER_H
#define HYPERBOLICCYLINDER_H
#include "graph.h"

class HyperbolicCylinder : public Graph
{
    float a;
    float b;
    float x0;
    float y0;
public:
    HyperbolicCylinder(float A, float B, float X0, float Y0);
};

#endif // HYPERBOLICCYLINDER_H
