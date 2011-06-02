#ifndef FILA_H
#define FILA_H
#include "elemento.h"
#include "no1.h"
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
        void procuraUltimo(no1 *(&noPtr), bool & ok);
    protected:
    private:
            no1 *ptrPrimeiro;
};

#endif // FILA_H
