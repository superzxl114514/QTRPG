#ifndef CHARACTER_H
#define CHARACTER_H

#include "gameobject.h"

class Character : public GameObject
{
    Q_OBJECT
public:
    Character();
    int getx();
    int gety();
    void setx(int m);
    void sety(int m);

protected:
    int x;
    int y;
    // 枚举
       enum Direction// 即控制的按键
       {
           _Up_            = Qt::Key_W,
           _Down_          = Qt::Key_S,
           _Left_          = Qt::Key_A,
           _Right_         = Qt::Key_D
       };
    void SetDirection( int dir );

signals:

};

#endif // CHARACTER_H
