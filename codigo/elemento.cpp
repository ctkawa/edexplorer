#include "elemento.h"

elemento::elemento()
{
    valor = 0;
}
elemento::elemento(int v)
{
    valor = v;
}
elemento::elemento(elemento e)
{
    valor = elemento.valor;
}

elemento::~elemento()
{
    /*===================================*/ cout << "Killing elemento" << endl;
    //dtor
}

void elemento::setValor(int v){
    valor = v;
}
int elemento::getValor(){
    retur valor;
}

/*
elemento::elemento()& elemento::operator=(int esq){
    conteudo = esq;
    return *this;
}*/
