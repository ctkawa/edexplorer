#ifndef ARVOREBB_H
#define ARVOREBB_H_H
#include "elemento.h"
#include "no2old.h"

class arvorebb
{
    public:
        arvorebb();
        arvorebb(const arvorebb &);
        virtual ~arvorebb();
        no2old* getRaiz(){return raiz;};
        bool vazia();
        bool estaNaArvore(elemento &);
        bool insere(elemento &);
        elemento &remover(no2old *, bool &);

        void imprimeAll();

    protected:
    private:
        no2old *raiz;
        bool estaNaArvoreR(elemento &, no2old *);
        bool insereR(elemento &, no2old *&);
        elemento &removerR(no2old *, no2old *, bool &);

        void imprimeAllR(no2old*);
};

#endif
