#include <QApplication>
#include <QLabel>
#include <QtOpenGL/QGLWidget>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGLWidget w;
    w.showFullScreen();
    return app.exec();
}
