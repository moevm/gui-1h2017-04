#include "graph.h"

Graph::Graph() {
}

Graph::~Graph(){}

void Graph::draw() {
    const int prec_x = 60, prec_y = 60;
    // DRAWING.
    double r, g, b;
    r = g = b = 1.0f;
    int qwe = 100;

    glEnable(GL_ALPHA_TEST);
    glEnable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    for (int i = 0; i < prec_x - 1; i++) {
        r = 1.0f;
        for (int j = 0; j < prec_y - 1; j++) {
                glColor4d(r, g, b, 0.5);
                glBegin(GL_TRIANGLES);

                glVertex3d(X[i] / qwe, Z[i][j] / qwe, Y[j] / qwe);
                glVertex3d(X[i] / qwe, Z[i][j + 1] / qwe, Y[j + 1] / qwe);
                glVertex3d(X[i + 1] / qwe, Z[i + 1][j] / qwe, Y[j] / qwe);

                glVertex3d(X[i] / qwe, Z[i][j + 1] / qwe, Y[j + 1] / qwe);
                glVertex3d(X[i + 1] / qwe, Z[i + 1][j] / qwe, Y[j] / qwe);
                glVertex3d(X[i + 1] / qwe, Z[i + 1][j + 1] / qwe, Y[j + 1] / qwe);

                glEnd();
                r -= 1.0 / prec_y;
        }
        g -= 1.0 / prec_x;
    }

    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
}

void Graph::setX(int i, double x) {
    X[i] = x;
}

void Graph::setY(int i, double y) {
    Y[i] = y;
}

void Graph::setZ(int i, int j, double z) {
    Z[i][j] = z;
}
