// Fila ESTATICA

#ifndef FILA_H
#define FILA_H
#include "elemento.h"

using namespace std;
class filaS
{
    public:
        filaS();
        filaS(int);
        virtual ~filaS();
        int getTamanoAtual();
        int getTamanoMaximo();

        void entra(elemento&, bool&);
        void sai(elemento&, bool&);
        bool vazia();
        bool cheia();
    protected:
    private:
        int tamanhoAtual;
        int tamanhoMaximo;
        elemento filaEle[];
};

#endif // FILA_H
