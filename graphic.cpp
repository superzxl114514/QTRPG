#include "graphic.h"

Graphic::Graphic(){

}

Graphic::Graphic(QList<QLabel *> m)
{
    foreach(QLabel * t, m){
        this->tilemap<<t;
    }
    foreach(Material t, MaterialList().GetList()){
        QPixmap p;
        p.load(t.path);
        this->images<<p;
    }
}


void Graphic::Render(int x, int y, Map map){
    //先找到玩家的位置

    int mx=0;
    int my=0;
    for(int i=0; i<81;i++){
        mx=x+(i%9-4);
        my=y+(i/9-4);
        if(mx<0|my<0|mx>map.getWidth()-1|my>map.getHeight()-1){

            this->tilemap[i]->setPixmap(images[0]);
        }
        else{
            this->tilemap[i]->setPixmap(images[map.getMap(mx,my)]);
        }
    }

}
