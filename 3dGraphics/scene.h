#ifndef SCENE_H
#define SCENE_H

#include <QOpenGLWidget>
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

class Scene : public QOpenGLWidget/*, public QOpenGLFunctions*/ {
public:
    Scene( QWidget *parent = 0 );
    ~Scene();
    void initializeGL();
    void resize(int w, int h);
    void paintGL();
};

#endif // SCENE_H
