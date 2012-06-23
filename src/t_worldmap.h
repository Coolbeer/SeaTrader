#ifndef T_WORLDMAP_H
#define T_WORLDMAP_H

#include <QtGui/QWidget>

class t_worldMap : public QWidget
{
    public:
        t_worldMap(void);
    private:
        QPixmap *worldImg_big;
        QPixmap *worldImg_scaled;
    protected:
        void paintEvent(QPaintEvent *event);
        QSize sizeHint(void) const;
};
#endif
