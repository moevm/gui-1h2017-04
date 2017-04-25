#ifndef PARABOLICCYLINDER_H
#define PARABOLICCYLINDER_H
#include "graph.h"

class ParabolicCylinder : public Graph
{
    float a;
    float b;
    float y0;
public:
    ParabolicCylinder(float A, float B, float Y0);
};

#endif // PARABOLICCYLINDER_H
