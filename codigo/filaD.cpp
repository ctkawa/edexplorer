#include "filaD.h"

filaD::filaD()
{
    ptrPrimeiro = NULL;
    //ctor
}

filaD::~filaD()
{
/*===================================*/ cout << "Killing fila" << endl;
    bool ok = false;
    elemento *ele;
    do
        sai(ele,ok);
    while(ok);
}

void filaD::entra(const elemento &ele){
    no1old *noPtrRet;
    no1old *novoNo;
    bool ok = false;
    novoNo = new no1old();
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

void filaD::sai(elemento *(&ele), bool & ok){
    no1old *noPtr;
    if (ptrPrimeiro==NULL){
        return;
    }
    *ele = ptrPrimeiro->info;
    noPtr = ptrPrimeiro->next;
    delete ptrPrimeiro;
    ptrPrimeiro = noPtr;
    return;

}

void filaD::procuraUltimo(no1old *(&noPtr), bool & ok){
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
