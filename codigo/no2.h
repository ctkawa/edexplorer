#ifndef NO2_H
#define NO2_H
#include "elemento.h"

class no2
{
    public:
        no2();
        no2(const no2&);
        virtual ~no2();
        elemento info;
        no2 *dir;
        no2 *esq;
    protected:
    private:
};

#endif // NO2_H
