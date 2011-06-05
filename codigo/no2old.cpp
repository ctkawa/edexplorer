#include "no2old.h"

no2old::no2old()
{
    info = 0;
    dir = NULL;
    esq = NULL;
}

no2old::~no2old()
{
    /*===================================*/ //cout << "Killing no2old" << endl;
    //dtor
}

no2old::no2old(const no2old &original){
    info = original.info;
    dir = original.dir;
    esq = original.esq;
}

elemento& no2old::getInfo(){
    return info;
}
