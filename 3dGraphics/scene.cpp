#include "scene.h"

Scene::Scene( QWidget *parent ) :
    QOpenGLWidget(parent) {}

Scene::~Scene() {}

void Scene::initializeGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void Scene::resize(int w, int h) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-100, 100, -100, 100, 100, 2000);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0, 0, (GLint)w, (GLint)h);
}

void Scene::paintGL() {
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();

    glTranslated(-0.6, -0.7, 0.55);
    glRotatef(20, 1, 0, 0);
    glRotatef(-20, 0, 1, 0);
    glRotatef(0, 0, 0, 1);

    CoordAxes coord(15);
    coord.draw();
    Ellipsoid ellipsoid(1.0, 1.0, 1.0, 2, 0, 0);
    ellipsoid.draw();

    Cone cone(1.0, 1.0, 1.0, 0.0, 0.0, 0.0);
    cone.draw();

    //HyperbolicParaboloid paraboloid(1.0/2, 1.0/5, 1.0, 7.0, 9.0);
    //paraboloid.draw();

    glPopMatrix();
    //glutSwapBuffers();
}
