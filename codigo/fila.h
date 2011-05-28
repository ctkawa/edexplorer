#ifndef FILA_H
#define FILA_H
#include "elemento.h"

class fila
{
    public:
        fila();
        virtual ~fila();
        void entra(elemento&);
        elemento& sai();
    protected:
    private:
        elemento filaElem[];
        int tamanho;
};

#endif // FILA_H
