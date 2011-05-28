#include "fila.h"

fila::fila()
{
    ptrPrimeiro = NULL;
    //ctor
}

fila::~fila()
{
    //dtor
}

void fila::entra(elemento &ele){
    no1 *noPtr;
    no1 *novoNo;
    novoNo = new no1();
    novoNo->info = ele;
    noPtr = procuraUltimo();
    noPtr->next = novoNo;



    return;
}

void fila::sai(elemento & ele, bool & ok){
    no1 *noPtr;
    if (ptrPrimeiro==NULL){
        return;
    }
    ele = ptrPrimeiro->info;
    noPtr = ptrPrimeiro->next;
    delete ptrPrimeiro;
    ptrPrimeiro = noPtr;
    return;

}

no1 * fila::procuraUltimo(){
    no1 *noPtr;
    noPtr = ptrPrimeiro;

    if (noPtr = NULL){
        return ptrPrimeiro;
    }
cout << "here@@@@@@@@@@@@!!" << endl;
cout << noPtr->next << endl;
    while(noPtr->next!=NULL){
        cout << "ad:" << noPtr->next;
        noPtr = noPtr->next;
    }
    return noPtr;
}
