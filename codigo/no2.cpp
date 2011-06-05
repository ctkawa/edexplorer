#include "no2.h"

no2::no2(){
    info = 0;
    dir = NULL;
    esq = NULL;
}

no2::no2(elemento e){
	info = e;
}

no2::~no2(){

}

no2::no2(const no2 &original){
    info = original.info;
    dir = original.dir;
    esq = original.esq;
}

elemento no2::getInfo(){
    return info;
}

void no2::setInfo(elemento e){
	info = e;
}

no2* no2::getDir(){
	return dir;
}

void no2::setDir(no2* no){
	dir = no;
}

no2* no2::getEsq(){
	return esq;
}

void no2::setEsq(no2* no){
	esq = no;
}
