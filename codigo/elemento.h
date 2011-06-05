#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <iostream>
/*
    Sobrecarregar operacoes ==,...
*/

using namespace std;
class elemento
{
	friend ostream &operator<<(ostream &, elemento);

	private:
		int valor;

	public:
		elemento();
		elemento(int);
		elemento(const elemento&);
		virtual ~elemento();
		void setValor(int);
		int getValor();
		bool operator==(elemento const &);
		elemento& operator=(int);
		bool operator<(elemento const &);
		bool operator>(elemento const &);
};

#endif // ELEMENTO_H
