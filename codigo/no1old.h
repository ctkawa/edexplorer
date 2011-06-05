#ifndef NO1OLD_H
#define NO1OLD_H
#include "elemento.h"

class no1old
{
    public:
        no1old();
        no1old(const elemento &);
        virtual ~no1old();
        elemento info;
        no1old *next;
        //elemento const &getInfo();
        //void setInfo(const & elemento);
        //elemento const getNext();
        //void setNext(no1old&);
    protected:
    private:

};

#endif // NO1OLD_H
