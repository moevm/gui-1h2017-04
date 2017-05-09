#include "scene.h"

Scene::Scene( QWidget *parent ) :
    QGLWidget(parent) {
    xRotation = 20;
    yRotation = -20;
    zRotation = 0;
    scale = 1;
}

Scene::~Scene() {}

void Scene::initializeGL() {
    qglClearColor(Qt::white);
}

void Scene::resize(int w, int h) {
    glViewport(0, 0, h, w);
    glMatrixMode(GL_PROJECTION);
    //glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glFrustum(-100, 100, -100, 100, 100, 2000);
}

void Scene::paintGL() {
    
    /*glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glTranslated(-0.6, -0.2, 0.0);
    //glScalef(scale, scale, scale);
    glRotatef(xRotation, 1.0f, 0.0f, 0.0f);
    glRotatef(yRotation, 0.0f, 1.0f, 0.0f);
    glRotatef(zRotation, 0.0f, 0.0f, 1.0f);

    CoordAxes coord(15);
    coord.draw();

    //Cone graph(1.0, 1.0, 1.0, 0.0, 0.0, 0.0);
    //graph.draw();
    TwoSheetedHyperboloid graph1(1.0/2, 1.0, 1.0/3, 5.0, 2.0, 0.0);
    graph1.draw();

    glPopMatrix();*/
}

// нажатие клавиши мыши
void Scene::mousePressEvent(QMouseEvent* pe) {
   mousePos = pe->pos(); // запоминаем координату нажатия мыши
}

// изменение положения стрелки мыши
void Scene::mouseMoveEvent(QMouseEvent* pe) {
   xRotation += 180 / scale * (GLfloat)(pe->y()-mousePos.y()) / height(); // вычисляем углы поворота
   zRotation += 180 / scale * (GLfloat)(pe->x()-mousePos.x()) / width();

   mousePos = pe->pos();
   updateGL(); // обновляем изображение
}

void Scene::mouseReleaseEvent(QMouseEvent *pe) {}
