#include "fila.h"

fila::fila()
{
    ptrPrimeiro = NULL;
    //ctor
}

fila::~fila()
{
/*===================================*/ cout << "Killing fila" << endl;
    bool ok = false;
    elemento *ele;
    do
        sai(ele,ok);
    while(ok);
}

void fila::entra(elemento &ele){
    no1 *noPtrRet;
    no1 *novoNo;
    bool ok = false;
    novoNo = new no1();
    novoNo->info = ele;
    procuraUltimo(noPtrRet, ok);
    if (ok){
        noPtrRet->next = novoNo;
    }
    else{
        ptrPrimeiro = novoNo;
    }
    return;
}

void fila::sai(elemento *(&ele), bool & ok){
    no1 *noPtr;
    if (ptrPrimeiro==NULL){
        return;
    }
    *ele = ptrPrimeiro->info;
    noPtr = ptrPrimeiro->next;
    delete ptrPrimeiro;
    ptrPrimeiro = noPtr;
    return;

}

void fila::procuraUltimo(no1 *(&noPtr), bool & ok){
    if (ptrPrimeiro == NULL){
        ok = false;
        return;
    }
    noPtr = ptrPrimeiro;
    while(noPtr->next!=NULL){
        noPtr = noPtr->next;
    }
    ok = true;
    return;
}
