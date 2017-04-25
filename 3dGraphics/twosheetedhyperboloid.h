#ifndef TWOSHEETEDHYPERBOLOID_H
#define TWOSHEETEDHYPERBOLOID_H
#include "graph.h"

class TwoSheetedHyperboloid : public Graph
{
    float a;
    float b;
    float c;
    float x0;
    float y0;
    float z0;
public:
    TwoSheetedHyperboloid(float A, float B, float C, float X0, float Y0, float Z0);
};

#endif // TWOSHEETEDHYPERBOLOID_H
