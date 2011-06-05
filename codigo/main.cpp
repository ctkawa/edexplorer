/*

UFSCar
Departamento de Computação
Bacharelado em Ciências da Computação

Disciplina: Estruturas de Dados
Professor: Dr. Roberto Ferrari

Trabalho 2 - Implementação de estruturas indicadas

Grupo:
	Cleber ..., RA
	Felipe ..., RA
	João Celso Santos de Oliveira, RA 379247
	Willian ..., RA

Junho de 2011

*/

#include <iostream>

#include "elemento.h"
//#include "no1old.h"
#include "no1.h";
//#include "no2old.h"
#include "no2.h"
//#include "filaS.h"
//#include "lista_simples.h"
#include "lista_avancada.h"
//#include "arvorebb.h"

using namespace std;

void titulo(string s){
	int barras = 40, i;
	cout << endl;
	for(i=0;i<barras;i++) cout << "/";
	cout << endl << "/// Testando " << s << endl;
	for(i=0;i<barras;i++) cout << "/";
	cout << endl << endl;
}

int main()
{
	/**** Testes das classes/estruturas:
		*
		* 1. classe elemento
		* 2. classe no1
		* 3. classe no2
		* 4. classe fila
		* 5. classe lista_simples
		* 6. classe lista_avancada
		* 7. classe arvore
		*
		****/

	////////////////////////////////////////////////
	//
	// 1. classe elemento
	//
	//

	titulo("classe elemento");

	cout << "Construtor sem argumento: ";
	elemento e0;
	cout << "ok" << endl;

	cout << "Construtor com argumento: ";
	elemento e1(1);
	if(e1.getValor() == 1)
		cout << "ok" << endl;

//	cout << "Construtor de cópia: ";
//	e0 = *(new elemento(50));
//	if( e0.getValor() == 50 )
//		cout << "ok" << endl;

		cout << "GET e SET valor: ";
	e0.setValor(10);
	if(e0.getValor() == 10)
		cout << "ok" << endl;

	cout << "Sobrecarga de '=': ";
	e0 = e1;
	if( e0.getValor() == e1.getValor() )
		cout << "ok" << endl;

	cout << "Sobrecarga de '<<': ok\t" << e0 << endl;

	////////////////////////////////////////////////
	//
	// 2. classe no1
	//
	//

    titulo("classe no1");

	cout << "Construtor sem argumento: ";
	no1 node0;
	cout << "ok" << endl;

	cout << "Construtor com argumento: ";
	e0.setValor(100);
	no1 node1(e0);
	if(node1.getInfo() == e0)
		cout << "ok" << endl;

	cout << "GET e SET info: ";
	e0.setValor(99);
	node1.setInfo(e0);
	if(node1.getInfo() == e0)
		cout << "ok" << endl;

	////////////////////////////////////////////////
	//
	// 2. classe no1old
	//
	//
/*
    titulo("classe no1old");

    no1old meuno[3], *noPtr;
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
*/
	////////////////////////////////////////////////
	//
	// 3. classe no2old
	//
	//
/*
	titulo("classe no2old");

    no2old meuno2;
    meuno2.info = 720;
    meuno2.dir = &meuno2;
    meuno2.esq = &meuno2;
    cout << meuno2.info << endl;
    cout << meuno2.dir->info << endl;
*/
	////////////////////////////////////////////////
	//
	// 4. classe fila
	//
	//

	titulo("classe fila");
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

	////////////////////////////////////////////////
	//
	// 5. classe lista_simples
	//
	//

	titulo("classe lista_simples");

	////////////////////////////////////////////////
	//
	// 6. classe lista_avancada
	//
	//

	titulo("classe lista_avancada");

    lista_avancada minhaListaA;
    elemento ele;

    cout << "inserindo sequencia de 0 a 9 a esquerda."<<endl;
    for(int i=0;i<10;i++){
        ele = i;
        if(!minhaListaA.insereAEsquerda(ele,*(minhaListaA.getPtrHeader()->getDir())))
            cout << "Erro na insercao de " << ele << endl;
    }

    cout << "imprimindo tudo de direita para esquerda." << endl;
    minhaListaA.printAll();

	////////////////////////////////////////////////
	//
	// 7. classe arvore
	//
	//

	titulo("classe arvore");

    return 0;
}
