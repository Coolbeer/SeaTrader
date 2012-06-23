#include "t_worldmap.h"

#include <QtGui/QPainter>
#include "t_port.h"

t_worldMap::t_worldMap(void)
{
    worldImg_big = new QPixmap;
    bool done = worldImg_big->load("data/img/world.200407.3x5400x2700.png");
    worldImg_scaled = new QPixmap(worldImg_big->scaledToWidth(1680));
}

void t_worldMap::paintEvent(QPaintEvent *event)
{
    t_port port;

    QPainter painter(this);
    painter.drawPixmap(0, 0, *worldImg_scaled);

    float scale = static_cast<float>(worldImg_big->width()) / static_cast<float>(worldImg_scaled->width());
    painter.setPen(Qt::white);
    painter.drawRect((port.x / scale) , (port.y / scale), 5, 5);
}

QSize t_worldMap::sizeHint(void) const
{
    QSize retValue;
    retValue.setWidth(worldImg_scaled->width());
    retValue.setHeight(worldImg_scaled->height());
    return retValue;
}
