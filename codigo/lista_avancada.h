
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
        void adicionar(elemento&, bool&);
        bool estaNaLista(const elemento&);
        void retirar(no2*, bool&);
        void retirar(elemento&, bool&);
        elemento info(no2&, bool&);
        bool insereADireita(elemento&, no2&);
        bool insereAEsquerda(elemento&, no2&);

        no2 *getPtrHeader(){
            return &header;
        }
        bool estaNaLista(const no2*);

        void printAll();

    protected:
    private:
        int tamanhoAtual;
        no2 header;
};

#endif
