#include "postecontrole.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PosteControle w;
    w.show();



    return a.exec();
}
