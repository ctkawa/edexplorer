#ifndef NO2OLD_H
#define NO2OLD_H
#include "elemento.h"

class no2old
{
    public:
        no2old();
        no2old(const no2old&);
        virtual ~no2old();

        elemento &getInfo();

        elemento info;
        no2old *dir;
        no2old *esq;
    protected:
    private:
};

#endif // NO2OLD_H
