#ifndef CONE_H
#define CONE_H
#include "graph.h"

class Cone : public Graph
{
    float a;
    float b;
    float c;
    float x0;
    float y0;
    float z0;
public:
    Cone(float A, float B, float C, float X0, float Y0, float Z0);
};

#endif // CONE_H
