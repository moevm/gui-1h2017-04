#ifndef GRAPH_H
#define GRAPH_H
#include <QOpenGLWidget>
//#include "scene.h"

class Graph //: public Scene
{
    double X[60];
    double Y[60];
    double Z[60][60];
public:
    Graph();
    ~Graph();
    void draw(float Alpha);
    void setX(int i, double x);
    void setY(int i, double y);
    void setZ(int i, int j, double z);
};

#endif // GRAPH_H
