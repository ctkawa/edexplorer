#ifndef LISTA_SIMPLES_H
#define LISTA_SIMPLES_H
#include "no1.h"
#include "elemento.h"

using namespace std;
class lista_simples
{
    public:
        lista_simples();
        virtual ~lista_simples();
        bool estaNaLista(elemento);
        bool vazia();
        void insereElemento(elemento);
        bool removeElemento(elemento);
	
    protected:
    private:
        no1 *ptrPrimeiro;
        
};
#endif
