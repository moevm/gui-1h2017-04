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

    int xRotation, yRotation, zRotation, scale; // переменные поворота и масштаба
    QPoint mousePos; // переменная для запоминания позиции нажатия мышки
};

#endif // SCENE_H
