#include "elemento.h"

elemento::elemento()
{
    valor = 0;
}

elemento::elemento(int v)
{
    valor = v;
}

elemento::elemento(const elemento &e)
{
    valor = e.valor;
}

elemento::~elemento()
{
    /*===================================*/ // cout << "Killing elemento" << endl;
    //dtor
}

void elemento::setValor(int v){
    valor = v;
}

int elemento::getValor(){
    return valor;
}

bool elemento::operator==(elemento const &esq){
	return (valor == esq.valor);
};

elemento& elemento::operator=(int esq){
	valor = esq;
	return *this;
};

ostream &operator<<(ostream &out, elemento e){
	out << "<" << e.valor << ">";
	return out;
}

bool elemento::operator<(elemento const &esq){
	return (valor < esq.valor);
};

bool elemento::operator>(elemento const &esq){
	return (valor > esq.valor);
};
