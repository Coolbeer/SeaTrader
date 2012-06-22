#include "t_worldscreen.h"

#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPixmap>

t_worldScreen::t_worldScreen(void)
{
    QPixmap *worldImg(new QPixmap);
    bool done = worldImg->load("data/img/world.200407.3x5400x2700.png");
    QPixmap worldImgz = worldImg->scaledToWidth(1024);
    QLabel *worldMap(new QLabel);
    if(!done)
        worldMap->setText("hopp");
    else
        worldMap->setPixmap(worldImgz);
    QVBoxLayout *layout(new QVBoxLayout);
    layout->addWidget(worldMap);
    this->setLayout(layout);
}