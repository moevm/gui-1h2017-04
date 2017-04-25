#ifndef GRAPH_H
#define GRAPH_H
#include <QOpenGLWidget>

class Graph
{
    double X[60];
    double Y[60];
    double Z[60][60];
public:
    Graph();
    ~Graph();
    void draw();
    void setX(int i, double x);
    void setY(int i, double y);
    void setZ(int i, int j, double z);
};

#endif // GRAPH_H
