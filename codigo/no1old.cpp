#include "no1old.h"

no1old::no1old()
{
    next = NULL;
}
no1old::no1old(const elemento &e)
{
    info = e;
    next = NULL;
}

no1old::~no1old()
{
    /*===================================*/ //cout << "Killing no1old" << endl;
    //dtor
}
