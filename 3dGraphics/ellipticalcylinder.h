#ifndef ELLIPTICALCYLINDER_H
#define ELLIPTICALCYLINDER_H
#include "graph.h"

class EllipticalCylinder : public Graph
{
    float a;
    float b;
    float x0;
    float y0;
public:
    EllipticalCylinder(float A, float B, float X0, float Y0);
};

#endif // ELLIPTICALCYLINDER_H
