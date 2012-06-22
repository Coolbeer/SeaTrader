#include <QtGui/QApplication>

#include "t_worldscreen.h"

int main(int argc, char **argv)
{
    QApplication *qAp(new QApplication(argc, argv));
    t_worldScreen worldScreen;
    worldScreen.show();
    return qAp->exec();
}
