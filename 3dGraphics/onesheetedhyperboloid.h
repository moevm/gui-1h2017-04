#ifndef ONESHEETEDHYPERBOLOID_H
#define ONESHEETEDHYPERBOLOID_H
#include "graph.h"

class OneSheetedHyperboloid : public Graph
{
    float a;
    float b;
    float c;
    float x0;
    float y0;
    float z0;
public:
    OneSheetedHyperboloid(float A, float B, float C, float X0, float Y0, float Z0);
};

#endif // ONESHEETEDHYPERBOLOID_H
