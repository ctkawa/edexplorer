#include "no1.h"

no1::no1(){
    next = NULL;
}

no1::no1(elemento e){
    info = e;
    next = NULL;
}

elemento no1::getInfo(){
	return info;
}

void no1::setInfo(elemento e){
	info = e;
}

no1* no1::getNext(){
	return next;
}

void no1::setNext(no1* no){
	next = no;
}
