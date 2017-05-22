#ifndef PARABOLICCYLINDER_H
#define PARABOLICCYLINDER_H
#include "graph.h"

class ParabolicCylinder : public Graph
{
    float p;
    float y0;
    float alpha;
public:
    ParabolicCylinder(float P, float Y0);
};

#endif // PARABOLICCYLINDER_H
