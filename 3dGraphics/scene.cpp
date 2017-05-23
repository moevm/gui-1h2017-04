#include "scene.h"

Scene::Scene( QWidget *parent ) :
    QGLWidget(parent) {
    xRotation = 20;
    yRotation = -20;
    zRotation = 0;
    scale = 1;
    alpha = 1;
    index = -1;
}

Scene::~Scene() {}

void Scene::initializeGL() {


    qglClearColor(Qt::white);
    glEnable(GL_DEPTH_TEST);
}

void Scene::resize(int w, int h) {
    glViewport(0, 0, h, w);
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glFrustum(-100, 100, -100, 100, 100, 2000);
}

void Scene::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glTranslated(-0.6, -0.2, 0.0);
    glScalef(scale, scale, scale);
    glRotatef(xRotation, 1.0f, 0.0f, 0.0f);
    glRotatef(yRotation, 0.0f, 1.0f, 0.0f);
    glRotatef(zRotation, 0.0f, 0.0f, 1.0f);

    CoordAxes coord(15);
    coord.draw();

    switch (index) {
        case 0: {
            ParabolicCylinder graph(b, y0);
            graph.draw(alpha);
            break;
        }
        case 1: {
            EllipticalCylinder graph(a, b, x0, y0);
            graph.draw(alpha);
            break;
        }
        case 2: {
            HyperbolicCylinder graph(a, b, x0, y0);
            graph.draw(alpha);
            break;
        }
        case 3: {
            EllipticParaboloid graph(a, b, x0, y0);
            graph.draw(alpha);
            break;
        }
        case 4: {
            HyperbolicParaboloid graph(a, b, c, x0, y0);
            graph.draw(alpha);
            break;
        }
        case 5: {
            Cone graph(a, b, c, x0, y0, z0, alpha);
            graph.draw(alpha);
            break;
        }
        /*case 6: {
            Ellipsoid graph(a, b, c, x0, y0, z0, alpha);
            graph.draw(alpha);
            break;
        }
        case 7: {
            OneSheetedHyperboloid graph(a, b, c, x0, y0, z0, alpha);
            graph.draw(alpha);
            break;
        }*/
        case 6: { //8
            TwoSheetedHyperboloid graph(a, b, c, x0, y0, z0, alpha);
            graph.draw(alpha);
            break;
        }
        case 7: { //9
            RandGraph graph(value);
            graph.draw(alpha);
            break;
    }
        default:
            break;
    }

    glPopMatrix();
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

void Scene::setParam(int Index, float A, float B, float C, float X0, float Y0, float Z0) {
    index = Index;
    a = A;
    b = B;
    c = C;
    x0 = X0;
    y0 = Y0;
    z0 = Z0;
}

void Scene::setAlpha(float Alpha) {
    alpha = Alpha;
}

void Scene::setScale(float Scale) {
    scale = Scale;
}

void Scene::setValue(int Index, QString Value) {
    index = Index;
    value = Value;
}
