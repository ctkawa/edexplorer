#ifndef NO1_H
#define NO1_H
#include "elemento.h"

class no1
{
    public:
        no1();
        no1(const elemento &);
        virtual ~no1();
        elemento info;
        no1 *next;
        //elemento const &getInfo();
        //void setInfo(const & elemento);
        //elemento const getNext();
        //void setNext(no1&);
    protected:
    private:

};

#endif // NO1_H
