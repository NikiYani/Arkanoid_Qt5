#include "arkanoid.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Arkanoid w;
    w.resize(300, 400);
    w.setWindowTitle("Arkanoid");
    w.show();
    return a.exec();
}
