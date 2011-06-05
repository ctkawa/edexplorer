#include "no2.h"

no2::no2()
{
    info = 0;
    dir = NULL;
    esq = NULL;
}

no2::~no2()
{
    /*===================================*/ //cout << "Killing no2" << endl;
    //dtor
}

no2::no2(const no2 &original){
    info = original.info;
    dir = original.dir;
    esq = original.esq;
}

elemento& no2::getInfo(){
    return info;
}
