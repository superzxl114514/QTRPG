 #include "materiallist.h"

MaterialList::MaterialList()
{
    this->list<<Material(":/image/resource/image/0.jpg",0);
    this->list<<Material(":/image/resource/image/light_yellow.jpg",1);
}

QString MaterialList::Searchmaterial(int m){
    foreach(Material t, this->list){
        if(t.enumber==m)
            return t.path;
    }
    return nullptr;
}


QList<Material> MaterialList::GetList(){
    return this->list;
}
