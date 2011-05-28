#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <iostream>
/*
    Sobrecarregar operacoes <<
*/

using namespace std;
class elemento
{
    public:
        elemento();
        virtual ~elemento();
        int conteudo;
        elemento& operator=(int esq){
            conteudo = esq;
            return *this;
        };
        friend ostream &operator<<(ostream &out, elemento e){
            out << e.conteudo;
            return out;
        }
    protected:
    private:

};

#endif // ELEMENTO_H
