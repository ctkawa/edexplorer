#ifndef FILA_H
#define FILA_H
#include "elemento.h"
#include "no1old.h"
using namespace std;
class filaD
{
    public:
        filaD();
        virtual ~filaD();

        void entra(const elemento&);            //conteudo do elemento nao muda
        void sai(elemento *(&ele), bool & ok);
        //bool verificaVazio();
        //bool verificaCheia();
        //Cria fila e o constructor
        void procuraUltimo(no1old *(&noPtr), bool & ok);
    protected:
    private:
            no1old *ptrPrimeiro;
};

#endif // FILA_H
