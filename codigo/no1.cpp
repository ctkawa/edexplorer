#include "no1.h"

no1::no1()
{
    next = NULL;
}
no1::no1(const elemento &e)
{
    info = e;
    next = NULL;
}

no1::~no1()
{
    /*===================================*/ //cout << "Killing no1" << endl;
    //dtor
}
