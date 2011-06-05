#ifndef NO1_H
#define NO1_H
#include "elemento.h"

class no1
{
	private:
		elemento info;
		no1 *next;
	public:
		no1();
		no1(elemento);
		virtual ~no1();
		elemento getInfo();
		void setInfo(elemento);
		no1* getNext();
		void setNext(no1 *);
};

#endif // NO1_H
