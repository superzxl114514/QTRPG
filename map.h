#ifndef MAP_H
#define MAP_H
#include <QList>
#include <QTextStream>
#include <QString>

class Map
{
public:
    Map();
    Map(int m);
    int getWidth();
    int getHeight();
    QList<int> getMaplist();
    int getMap(int x,int y);
    bool judgeavailable(int x, int y);
private:
    int width;//地图宽度
    int height;//地图高度
    int x;//角色横坐标
    int y;//角色纵坐标
    QList<int> maplist;
};

#endif // MAP_H
