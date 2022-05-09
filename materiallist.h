#ifndef MATERIALLIST_H
#define MATERIALLIST_H
#include <QTextStream>
#include <QString>
#include "material.h"
class MaterialList
{
public:
    MaterialList();
    QString Searchmaterial(int m);
    QList<Material> GetList();
private:
    QList<Material> list;
};

#endif // MATERIALLIST_H
