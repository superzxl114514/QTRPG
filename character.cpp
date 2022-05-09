#include "character.h"

Character::Character()
{
    this->charaimage.load(":/image/resource/image/character.png");
    Frame = QRect(0,
                         2 * IMAGE_HEIGHT / 4,
                         IMAGE_WIDTH/4,
                         IMAGE_HEIGHT/4 );
}
int Character::getx(){
    return this->x;
}

int Character::gety(){
    return this->y;
}

QRect Character::getFrame(){
    return this->Frame;
}

void Character::setx(int m){
    this->x=m;
}

void Character::sety(int m){
    this->y=m;
}

void Character::SetDirection( int dir )
{
    Frame = QRect( Frame.x( ),
                         dir * IMAGE_HEIGHT / 4,
                         Frame.width( ),
                         Frame.height( ) );

}

QPixmap Character::getcurrentchara(){
    return this->charaimage.copy(this->Frame);
}

void Character::move(int m, Map map){
    switch(m){
        case 2:
        if(x<map.getWidth()-1&&map.judgeavailable(x+1,y))
            x++;
        break;
        case 1:
         if(x>0&&map.judgeavailable(x-1,y))
             x--;
        break;
        case 3:
         if(y>0&&map.judgeavailable(x,y-1))
             y--;
        break;
         case 0:
          if(y<map.getHeight()-1&&map.judgeavailable(x,y+1))
              y++;
        break;
    }


}
