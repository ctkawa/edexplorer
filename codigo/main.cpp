#include <iostream>

#include "no1.h"
#include "no2.h"
#include "fila.h"

using namespace std;

int main()
{
    cout << "Testing no1!" << endl;

    no1 meuno[3], *noPtr;
    meuno[0].info = 10;
    meuno[1].info = 11;
    meuno[2].info = 12;
    meuno[0].next = &meuno[1];
    meuno[1].next = &meuno[2];
    meuno[2].next = &meuno[0];

    cout << "meuno[0].info = " << meuno[0].info << " / at = " << meuno[0].next << endl;
    cout << "meuno[1].info = " << meuno[1].info << " / at = " << meuno[1].next  << endl;
    cout << "meuno[2].info = " << meuno[2].info << " / at = " << meuno[2].next  << endl;

    noPtr = meuno[0].next;

    cout << noPtr->info<< endl;
    noPtr->info = 77;
    cout << noPtr->info<< endl;

    meuno[0].next->next = &meuno[0];

    noPtr->next = noPtr;
    cout << noPtr << endl;
    cout << noPtr->next << endl;
/*SEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDO*/

    cout << endl << "Testing no2!" << endl;
    no2 meuno2;
    meuno2.info = 720;
    meuno2.dir = &meuno2;
    meuno2.esq = &meuno2;
    cout << meuno2.info << endl;
    cout << meuno2.dir->info << endl;

/*SEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDO*/

    cout << endl << "Testing fila!" << endl;
    elemento cambada[10], *ptrEle;
    bool *ptrBool;
    cambada[0] = 3; cambada[1] = 13;
    cambada[2] = 2; cambada[3] = 6;
    cambada[4] = 4; cambada[5] = 8;
    cambada[6] = 7; cambada[7] = 5;
    cambada[8] = 1; cambada[9] = 9;
    fila minhafila;
    cout << "entrando: " << cambada[3] << endl; minhafila.entra(cambada[3]);
    cout << "entrando: " << cambada[2] << endl; minhafila.entra(cambada[2]);
    cout << "entrando: " << cambada[1] << endl; minhafila.entra(cambada[1]);
    minhafila.sai(*ptrEle,*ptrBool);
    if (*ptrBool) cout << "saindo: " << *ptrEle;
    minhafila.sai(*ptrEle,*ptrBool);
    if (*ptrBool) cout << "saindo: " << *ptrEle;
    minhafila.sai(*ptrEle,*ptrBool);
    if (*ptrBool) cout << "saindo: " << *ptrEle;


/*
    cout << "aqui deve ser info de [1]" << &noPtr.info.conteudo << endl;
    cout << "aqui deve ser info de [2]" << meuno[0].next.next.info.conteudo << endl;
*/


    return 0;
}
