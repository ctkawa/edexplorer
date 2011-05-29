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
    bool ok;
    novoNo = new no1();
    novoNo->info = ele;
    procuraUltimo(noPtr, ok);
                    cout << "Returned Last:" << noPtr << endl;
    if (ok){
                    cout << "OLD, inserting:" << novoNo << " to " << noPtr->next << endl;
        noPtr->next = novoNo;
                    cout << "OLD2" << endl;
    }
    else{
                    cout << "NEW" << endl;
        ptrPrimeiro = novoNo;
    }



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

void fila::procuraUltimo(no1* noPtr, bool & ok){
    if (ptrPrimeiro == NULL){
        ok = false;
        return;
    }
    noPtr = ptrPrimeiro;
    while(noPtr->next!=NULL){
        noPtr = noPtr->next;
    }
                    cout << "primeiro : "<< ptrPrimeiro << endl;
                    cout << "prim next: "<< ptrPrimeiro->next << endl;
                    cout << "Returning: "<< noPtr << endl;
    ok = true;
    return;
}
