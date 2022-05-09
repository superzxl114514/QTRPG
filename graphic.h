#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <QtGui>
#include <QtWidgets>
#include <QDialog>
#include <QDebug>
#include "materiallist.h"
#include "map.h"
class Graphic
{
public:
    Graphic();
    Graphic(QList<QLabel *> m);
    void Render(int x, int y, Map map);
private:
   QList<QLabel *> tilemap;
   QList<QPixmap> images;
};

#endif // GRAPHIC_H
