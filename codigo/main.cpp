#include <iostream>

#include "elemento.h"
#include "no1.h"
#include "no2.h"
//#include "filaS.h"
#include "lista_avancada.h"

using namespace std;

int main()
{
	///////////////////////////////////////////////
	cout << "Testando elemento" << endl;

	cout << "\tConstrutor sem argumento: ";
	elemento e0;
	cout << "ok" << endl;

	cout << "\tConstrutor com argumento: ";
	elemento e1(1);
	cout << "ok" << endl;


	cout << endl;
	///////////////////////////////////////////////
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
/*
cout<<"-----------" <<endl;
filaS afila(3);
elemento e1,e2,e3,e;
bool okb;
e1=11; e2=12; e3=13; e=111;
afila.entra(e3,okb);
afila.entra(e2,okb);
afila.entra(e1,okb);
afila.entra(e,okb);
afila.sai(e,okb);
afila.sai(e,okb);
afila.sai(e,okb);
cout << e <<endl;
cout<<"-----------" <<endl;
*/
/*
    cout << endl << "Testing fila!" << endl;
    elemento cambada[10], ele;
    bool ok;
    cambada[0] = 3; cambada[1] = 13;
    cambada[2] = 2; cambada[3] = 6;
    cambada[4] = 4; cambada[5] = 8;
    cambada[6] = 7; cambada[7] = 5;
    cambada[8] = 1; cambada[9] = 9;
    filaS minhafila(4);
    cout << "entrando: " << cambada[3];
         minhafila.entra(cambada[3], ok);
               cout << "  Result:" << ok << endl;
    cout << "entrando: " << cambada[2];
         minhafila.entra(cambada[2], ok);
              cout << "  Result:" << ok << endl;
    cout << "entrando: " << cambada[1];
        minhafila.entra(cambada[1], ok);
              cout << "  Result:" << ok << endl;
    cout << "Elementos inseridos!!!   Agora irao sair:" << endl;
    minhafila.sai(ele,ok);
    if (ok) cout << "saindo: " << ele ;      cout << "  Result:" << ok << endl;
    minhafila.sai(ele,ok);
    if (ok) cout << "saindo: " << ele ;      cout << "  Result:" << ok << endl;
    minhafila.sai(ele,ok);
    if (ok) cout << "saindo: " << ele ;      cout << "  Result:" << ok << endl;
    cout << "Elementos Saíram!!" << endl;
*/

/*SEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDOSEPARANDO*/

    cout << endl << "Testing fila_avancada!" << endl;
    lista_avancada minhaListaA;
    elemento ele;

    cout << "inserindo sequencia de 0 a 9 a esquerda."<<endl;
    for(int i=0;i<10;i++){
        ele = i;
        if(!minhaListaA.insereAEsquerda(ele,*(minhaListaA.getPtrHeader()->dir)))
            cout << "Erro na insercao de " << ele << endl;
    }

    cout << "imprimindo tudo de direita para esquerda." << endl;
    minhaListaA.printAll();

    return 0;
}
