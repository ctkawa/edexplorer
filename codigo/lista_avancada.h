
#ifndef LISTA_AVANCADA_H
#define LISTA_AVANCADA_H
#include "no2.h"
#include "elemento.h"

using namespace std;
class lista_avancada
{
    public:
        lista_avancada();
        virtual ~lista_avancada();
        int getTamanhoAtual();
        bool vazia();
        void adicionar(no2&, bool&);
        bool estaNaLista(elemento&);
        void retirar(no2&, bool&);
        void retirar(elemento&, bool&);
        elemento info(no2&, bool&);
        bool insereADireita(elemento&, no2&);
        bool insereAEsquerda(elemento&, no2&);

    protected:
    private:
        int tamanhoAtual;

};

#endif
