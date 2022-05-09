#ifndef CHARACTER_H
#define CHARACTER_H


#define IMAGE_HEIGHT 192
#define IMAGE_WIDTH 128
#include "gameobject.h"
#include "map.h"
#include <QKeyEventTransition>

class Character : public GameObject
{
    Q_OBJECT
public:
    Character();
    int getx();
    int gety();
    QRect getFrame();
    QPixmap getcurrentchara();
    void setx(int m);
    void sety(int m);
    void move(int m, Map map);
    void SetDirection( int dir );
protected:
    int x;
    int y;
    QPixmap charaimage;
    //截图框
    QRect Frame;
    // 枚举
       enum Direction// 即控制的按键
       {
           _Up_            = Qt::Key_W,
           _Down_          = Qt::Key_S,
           _Left_          = Qt::Key_A,
           _Right_         = Qt::Key_D
       };

};

#endif // CHARACTER_H
