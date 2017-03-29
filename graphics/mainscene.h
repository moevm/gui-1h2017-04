#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QOpenGLWidget>
#include <gl/GLU.h>
#include <gl/GL.h>

class MainScene : public QOpenGLWidget
{
public:
    MainScene();
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // MAINSCENE_H
