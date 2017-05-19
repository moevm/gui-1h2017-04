#include "scene.h"

Scene::Scene( QWidget *parent ) :
    QGLWidget(parent) {
    xRotation = 20;
    yRotation = -20;
    zRotation = 0;
    scale = 1;
    index = -1;
}

Scene::~Scene() {}

void Scene::initializeGL() {
    /*GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 0.0, 0.0, 0.0, 0.0 };
    GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat lmodel_ambient[] = { 0.1, 0.1, 0.1, 1.0 };
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glShadeModel(GL_SMOOTH);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);*/

    qglClearColor(Qt::white);
    glEnable(GL_DEPTH_TEST); //?
    //glShadeModel(GL_FLAT);
    //glEnable(GL_CULL_FACE);
    //glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
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
    //glScalef(scale, scale, scale);
    glRotatef(xRotation, 1.0f, 0.0f, 0.0f);
    glRotatef(yRotation, 0.0f, 1.0f, 0.0f);
    glRotatef(zRotation, 0.0f, 0.0f, 1.0f);

    CoordAxes coord(15);
    coord.draw();

    switch (index) {
        case 0: {
            ParabolicCylinder graph(b, y0);
            graph.draw();
            break;
        }
        case 1: {
            EllipticalCylinder graph(a, b, x0, y0);
            graph.draw();
            break;
        }
        case 2: {
            HyperbolicCylinder graph(a, b, x0, y0);
            graph.draw();
            break;
        }
        case 3: {
            EllipticParaboloid graph(a, b, x0, y0);
            graph.draw();
            break;
        }
        case 4: {
            HyperbolicParaboloid graph(a, b, c, x0, y0);
            graph.draw();
            break;
        }
        case 5: {
            Cone graph(a, b, c, x0, y0, z0);
            graph.draw();
            break;
        }
        /*case 6: {
            Ellipsoid graph(a, b, c, x0, y0, z0);
            graph.draw();
            break;
        }*/
        /*case 7: {
            OneSheetedHyperboloid graph(a, b, c, x0, y0, z0);
            graph.draw();
            break;
        }*/
        case 6: { //8
            TwoSheetedHyperboloid graph(a, b, c, x0, y0, z0);
            graph.draw();
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

