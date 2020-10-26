#include "mywidght.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidght w;
    w.show();

    return a.exec();
}
