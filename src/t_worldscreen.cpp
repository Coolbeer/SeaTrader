#include "t_worldscreen.h"

#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPixmap>

#include "t_worldmap.h"

t_worldScreen::t_worldScreen(void)
{
    t_worldMap *worldMap;
    worldMap = new t_worldMap;
    QVBoxLayout *layout(new QVBoxLayout);
    layout->addWidget(worldMap);
    this->setLayout(layout);
}
