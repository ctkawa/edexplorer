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

/*SEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDO*/

    cout << endl << "Testing no2!" << endl;
    no2 meuno2;
    meuno2.info = 720;
    meuno2.dir = &meuno2;
    meuno2.esq = &meuno2;
    cout << meuno2.info << endl;
    cout << meuno2.dir->info << endl;


/*
    cout << "aqui deve ser info de [1]" << &noPtr.info.conteudo << endl;
    cout << "aqui deve ser info de [2]" << meuno[0].next.next.info.conteudo << endl;
*/


    return 0;
}
