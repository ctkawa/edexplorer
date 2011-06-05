
#ifndef LISTA_AVANCADA_H
#define LISTA_AVANCADA_H
#include "no2old.h"
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
        void retirar(no2old*, bool&);
        void retirar(elemento&, bool&);
        elemento info(no2old&, bool&);
        bool insereADireita(elemento&, no2old&);
        bool insereAEsquerda(elemento&, no2old&);

        no2old *getPtrHeader(){
            return &header;
        }
        bool estaNaLista(const no2old*);

        void printAll();

    protected:
    private:
        int tamanhoAtual;
        no2old header;

};

#endif
