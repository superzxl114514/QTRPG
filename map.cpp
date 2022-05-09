#include "map.h"

Map::Map()
{

}

Map::Map(int m){
    switch(m){
        case 1:
        QFile aFile(":/map/resource/map/map1.txt");
        if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
               return;
         QTextStream aStream(&aFile);
         QStringList strList = aStream.readAll().split("+");
         this->height=strList[1].toInt();
         this->width=strList[0].toInt();
         for(int i=2;i<strList.count();i++)
             maplist<<strList[i].toInt();

          break;
    }

}

int Map::getWidth(){
    return this->width;
}

int Map::getHeight(){
    return this->height;
}

QList<int> Map::getMaplist(){
    return this->maplist;
}

int Map::getMap(int x,int y){
    return this->maplist[y*width+x];
}

bool Map::judgeavailable(int x, int y){
    if(x<0|x>width-1)
        return false;
    if(y<0|y>height-1)
        return false;
    return this->getMap(x,y)%10!=0;
}
