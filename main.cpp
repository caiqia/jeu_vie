#include "cellule.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cellule w;
    w.show();

    return a.exec();
}
