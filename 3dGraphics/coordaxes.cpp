#include "coordaxes.h"

CoordAxes::CoordAxes(float Pole) {
    pole = Pole;
}

CoordAxes::~CoordAxes() {}

void CoordAxes::draw() {
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(pole, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, pole, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, pole);
    glEnd();

    glBegin(GL_LINES);
    for ( float i = 0.0; i < pole; i += 0.1 ) {
        float j = 0.01; //ширина делений;
        glVertex3f(-j, i, 0.0);
        glVertex3f(j, i, 0.0);

        glVertex3f(i, -j, 0.0);
        glVertex3f(i, j, 0.0);

        glVertex3f(-j, 0.0, i);
        glVertex3f(j, 0.0, i);
    }
    glEnd();

}
