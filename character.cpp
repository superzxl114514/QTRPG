#include "character.h"

Character::Character()
{

}
int Character::getx(){
    return this->x;
}

int Character::gety(){
    return this->y;
}

void Character::setx(int m){
    this->x=m;
}

void Character::sety(int m){
    this->y=m;
}
