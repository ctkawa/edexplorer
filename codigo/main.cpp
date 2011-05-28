#include <iostream>

#include "no1.h"
#include "no2.h"
#include "fila.h"

using namespace std;

int main()
{
    cout << "Testing!" << endl;

    no1 meuno[3], *noPtr;
    meuno[0].info = 10;
    meuno[1].info = 11;
    meuno[2].info = 12;
    meuno[0].next = &meuno[1];
    meuno[1].next = &meuno[2];
    meuno[2].next = &meuno[0];

    cout << "meuno[0].info = " << meuno[0].info.conteudo << " / at = " << meuno[0].next << endl;
    cout << "meuno[1].info = " << meuno[1].info.conteudo << " / at = " << meuno[1].next  << endl;
    cout << "meuno[2].info = " << meuno[2].info.conteudo << " / at = " << meuno[2].next  << endl;

    noPtr = meuno[0].next;
    cout << *noPtr.info.conteudo << endl;
//    cout << noPtr.info.conteudo << endl;

/*
    cout << "aqui deve ser info de [1]" << &noPtr.info.conteudo << endl;
    cout << "aqui deve ser info de [2]" << meuno[0].next.next.info.conteudo << endl;*/


    return 0;
}
