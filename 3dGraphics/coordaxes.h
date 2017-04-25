#ifndef COORDAXES_H
#define COORDAXES_H
#include <QOpenGLWidget>

class CoordAxes
{
    float pole;
public:
    CoordAxes(float Pole);
    ~CoordAxes();
    void draw();
};

#endif // COORDAXES_H
