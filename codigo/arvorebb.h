#ifndef ARVOREBB_H
#define ARVOREBB_H_H
#include "elemento.h"
#include "no2.h"

class arvorebb
{
    public:
        arvorebb();
        arvorebb(const arvorebb &);
        virtual ~arvorebb();
        no2* getRaiz(){return raiz;};
        bool vazia();
        bool estaNaArvore(elemento &);
        bool insere(elemento &);
        elemento &remover(no2 *, bool &);

        void imprimeAll();

    protected:
    private:
        no2 *raiz;
        bool estaNaArvoreR(elemento &, no2 *);
        bool insereR(elemento &, no2 *&);
        elemento &removerR(no2*, no2 *, bool &);
        no2* maior(no2 *);
        void imprimeAllR(no2*);
};

#endif
