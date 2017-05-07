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

    //glTranslated(-0.6, -0.7, 0.55);
    //glRotatef(20, 1, 0, 0);
    //glRotatef(-20, 0, 1, 0);
    //glRotatef(0, 0, 0, 1);

    glScalef(scale, scale, scale);        // масштабирование
   glRotatef(xRotation, 1.0f, 0.0f, 0.0f); // поворот по X
   glRotatef(yRotation, 0.0f, 1.0f, 0.0f); // поворот по Y
   glRotatef(zRotation, 0.0f, 0.0f, 1.0f); // поворот по Z

    CoordAxes coord(15);
    coord.draw();

    Cone graph(1.0, 1.0, 1.0, 0.0, 0.0, 0.0);
    graph.draw();
    //TwoSheetedHyperboloid graph1(1.0, 1.0, 1.0, 0.0, 0.0, 0.0);
    //graph1.draw();

    glPopMatrix();
    //swapBuffers();
}

void Scene::mousePressEvent(QMouseEvent* pe) // нажатие клавиши мыши
{
   // запоминаем координату нажатия мыши
   mousePos = pe->pos();
}

void Scene::mouseMoveEvent(QMouseEvent* pe) // изменение положения стрелки мыши
{
   xRotation += 180/scale*(GLfloat)(pe->y()-mousePos.y())/height(); // вычисляем углы поворота
   zRotation += 180/scale*(GLfloat)(pe->x()-mousePos.x())/width();

   mousePos = pe->pos();
   paintGL(); // обновляем изображение
}

void Scene::mouseReleaseEvent(QMouseEvent *pe) {
}

void Scene::wheelEvent(QWheelEvent* pe) // вращение колёсика мыши
{
    // если колесико вращаем вперед -- умножаем переменную масштаба на 1.1
    // иначе -- делим на 1.1
    if ((pe->delta())>0) scale*=1.1; else if ((pe->delta())<0) scale/=1.1;

    paintGL();
}
