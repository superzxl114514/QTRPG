#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class GameObject : public QObject
{
    Q_OBJECT
public:
    explicit GameObject(QObject *parent = nullptr);

signals:

};

#endif // GAMEOBJECT_H
