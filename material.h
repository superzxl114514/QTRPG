#ifndef MATERIAL_H
#define MATERIAL_H
#include<QString>
#include<QTextStream>

class Material
{
public:
    Material(QString m, int n);
    QString path;
    QString name;
    int enumber;
};

#endif // MATERIAL_H
