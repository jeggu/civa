#include <QtGui/QApplication>
#include "civabase.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    civaBase w;

     w.show();
    
    return a.exec();
}
