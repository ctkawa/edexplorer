#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <iostream>
/*
    Sobrecarregar operacoes ==,...
*/

using namespace std;
class elemento
{
    public:
        elemento();
        elemento(int);
        elemento(const elemento&);
        virtual ~elemento();

        void setValor(int);
        int getValor();

        bool operator==(elemento const &esq){
            return (valor == esq.valor);
        };
        elemento& operator=(int esq){
            valor = esq;
            return *this;
        };
        friend ostream &operator<<(ostream &out, elemento e){
            out << e.valor;
            return out;
        }
    protected:
    private:
        int valor;
};

#endif // ELEMENTO_H
