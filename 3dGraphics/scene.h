#ifndef SCENE_H
#define SCENE_H

#include <QtOpenGL/QGLWidget>
#include <QOpenGLWidget>
#include <QMouseEvent>
#include "coordaxes.h"
#include "graph.h"
#include "paraboliccylinder.h"
#include "ellipticalcylinder.h"
#include "hyperboliccylinder.h"
#include "ellipticparaboloid.h"
#include "hyperbolicparaboloid.h"
#include "cone.h"
#include "ellipsoid.h"
#include "onesheetedhyperboloid.h"
#include "twosheetedhyperboloid.h"

class Scene : public QGLWidget/*, public QOpenGLFunctions*/ {
public:
    Scene( QWidget *parent = 0 );
    ~Scene();
    void initializeGL();
    void resize(int w, int h);
    void paintGL();
    void mousePressEvent(QMouseEvent* pe);   // нажатие на клавишу мыши
    void mouseMoveEvent(QMouseEvent* pe);    // перемещение мыши
    void mouseReleaseEvent(QMouseEvent* pe); // отжатие клавиши мыши
    void setParam(int Index, float A, float B, float C, float X0, float Y0, float Z0);

private:
    int xRotation, yRotation, zRotation, scale; // переменные поворота и масштаба
    QPoint mousePos; // переменная для запоминания позиции нажатия мышки
    float a, b, c;
    float x0, y0, z0;
    int index;

};

#endif // SCENE_H
