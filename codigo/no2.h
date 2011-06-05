#ifndef NO2_H
#define NO2_H
#include "elemento.h"

class no2
{
	private:
		elemento info;
		no2 *dir;
		no2 *esq;
		
	public:
		no2();
		no2(const no2&);
		virtual ~no2();

		elemento getInfo();
		void setInfo(elemento);
		no2* getDir();
		void setDir(no2*);
		no2* getEsq();
		void setEsq(no2*);
};

#endif // NO2_H
