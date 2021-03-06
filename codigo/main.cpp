/*

UFSCar
Departamento de Computação
Bacharelado em Ciências da Computação

Disciplina: Estruturas de Dados
Professor: Dr. Roberto Ferrari

Trabalho 2 - Implementação de estruturas indicadas

Grupo:
	Cleber Takahito Kawamorita, RA 379425
	Felipe ..., RA
	João Celso Santos de Oliveira, RA 379247
	Willian ..., RA

Junho de 2011

*/

#include <iostream>

#include "elemento.h"
#include "no1.h"
#include "no2.h"
#include "fila.h"
#include "lista_simples.h"
#include "lista_avancada.h"
#include "arvorebb.h"

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

	cout << "GET e SET next: ";
	e0.setValor(5);
	no1* pnode2 = new no1();
	pnode2->setInfo(e0);
	node0.setNext(pnode2);
	if(node0.getNext()->getInfo() == e0)
		cout << "ok" << endl;

    no1 meuno[3], *noPtr;
    meuno[0].setInfo(10);
    meuno[1].setInfo(11);
    meuno[2].setInfo(12);
    meuno[0].setNext(&meuno[1]);
    meuno[1].setNext(&meuno[2]);
    meuno[2].setNext(&meuno[0]);

    cout << "meuno[0].getInfo() = " << meuno[0].getInfo() << " / at = " << meuno[0].getNext() << endl;
    cout << "meuno[1].getInfo() = " << meuno[1].getInfo() << " / at = " << meuno[1].getNext()  << endl;
    cout << "meuno[2].getInfo() = " << meuno[2].getInfo() << " / at = " << meuno[2].getNext()  << endl;

    noPtr = meuno[0].getNext();

    cout << noPtr->getInfo()<< endl;
    noPtr->setInfo(77);
    cout << noPtr->getInfo()<< endl;

    meuno[0].getNext()->setNext(&meuno[0]);

    noPtr->setNext(noPtr);
    cout << noPtr << endl;
    cout << noPtr->getNext() << endl;

	////////////////////////////////////////////////
	//
	// 3. classe no2
	//
	//

	titulo("classe no2");

	cout << "Construtor sem argumento: ";
	no2 n2_0;
	cout << "ok" << endl;

	cout << "Construtor com argumento: ";
	e0.setValor(100);
	no2 n2_1(e0);
	if(n2_1.getInfo() == e0)
		cout << "ok" << endl;

	cout << "GET e SET info: ";
	e0.setValor(99);
	n2_1.setInfo(e0);
	if(n2_1.getInfo() == e0)
		cout << "ok" << endl;


	cout << "GET e SET dir: ";
	e0.setValor(5);
	no2* pn2_2 = new no2();
	pn2_2->setInfo(e0);
	n2_0.setDir(pn2_2);
	if(n2_0.getDir()->getInfo() == e0)
		cout << "ok" << endl;

	cout << "GET e SET esq: ";
	e0.setValor(6);
	pn2_2->setInfo(e0);
	n2_0.setEsq(pn2_2);
	if(n2_0.getEsq()->getInfo() == e0)
		cout << "ok" << endl;

    no2 meuno2;
    meuno2.setInfo(720);
    meuno2.setDir(&meuno2);
    meuno2.setEsq(&meuno2);
    cout << meuno2.getInfo() << endl;
    cout << meuno2.getDir()->getInfo() << endl;

	delete pn2_2;

	////////////////////////////////////////////////
	//
	// 4. classe fila
	//
	//

	titulo("classe fila");

	cout<<"-----------" <<endl;
	fila afila(3);

	elemento f1,f2,f3,f;
	bool okb;
	f1=11; f2=12; f3=13; f=111;
	afila.entra(f3,okb);
	afila.entra(f2,okb);
	afila.entra(f1,okb);
	afila.entra(f,okb);
	afila.sai(f,okb);
	afila.sai(f,okb);
	afila.sai(f,okb);
	cout << f <<endl;
	cout<<"-----------" <<endl;

    elemento cambada[10], ele;
    bool ok;
    cambada[0] = 3; cambada[1] = 13;
    cambada[2] = 2; cambada[3] = 6;
    cambada[4] = 4; cambada[5] = 8;
    cambada[6] = 7; cambada[7] = 5;
    cambada[8] = 1; cambada[9] = 9;
    fila minhafila(4);
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


	////////////////////////////////////////////////
	//
	// 5. classe lista_simples
	//
	//

	titulo("classe lista_simples");

	lista_simples lista;

	int i;

	for(i=0; i<=10; i++){
		e0.setValor(i);
		lista.insereElemento(e0);
	}

	lista.printAll();

 	for(i=0; i<=10; i+=2){
 		e0.setValor(i);
 		lista.removeElemento(e0);
 	}

	lista.printAll();

	e0.setValor(9);
	if(lista.estaNaLista(e0))
		cout << "9 está na lista" << endl;
	else
		cout << "9 não está na lista" << endl;

	e0.setValor(0);
	if(lista.estaNaLista(e0))
		cout << "0 está na lista" << endl;
	else
		cout << "0 não está na lista" << endl;


	////////////////////////////////////////////////
	//
	// 6. classe lista_avancada
	//
	//

	titulo("classe lista_avancada");

    lista_avancada minhaListaA;
//    elemento ele;

    cout << "inserindo sequencia de 0 a 9, sempre a esquerda de Header."<<endl;
    for(int i=0;i<10;i++){
        ele = i;
        if(!minhaListaA.insereAEsquerda(ele,*(minhaListaA.getPtrHeader())))
            cout << "Erro na insercao de " << ele << endl;
    }

    cout << "imprimindo tudo de Header para direita. Deve ser ordem crescente:" << endl;
    minhaListaA.printAll();

    //bool ok;
    cout << "Deletando tudo, 11 vezes para dar um erro:"<<endl;
    for(int i=1;i<=11;i++){
        minhaListaA.retirar(minhaListaA.getPtrHeader()->getDir(),ok);
        if(!ok)
            cout << "Erro na remocao: " << i << endl;
    }
    cout << "há "<<minhaListaA.getTamanhoAtual()<< " elementos."<<endl;

    cout << "inserindo pares a direita e impares a esquerda" <<endl;
    for(int i=0;i<10;i+=2){
        ele = i;
        if(!minhaListaA.insereADireita(ele,*(minhaListaA.getPtrHeader())))
            cout << "Erro na insercao de " << ele << endl;
        ele = i+1;
        if(!minhaListaA.insereAEsquerda(ele,*(minhaListaA.getPtrHeader())))
            cout << "Erro na insercao de " << ele << endl;
    }
    cout << "há "<<minhaListaA.getTamanhoAtual()<< " elementos."<<endl;
    minhaListaA.printAll();
	////////////////////////////////////////////////
	//
	// 7. classe arvore
	//
	//

	titulo("classe arvore");

    arvorebb meuArvore, meuA2;
    for(int i=0;i<10;i++){
        ele = i;
        if(!meuArvore.insere(ele))
            cout << "Erro na insercao de " << ele << endl;
        //cout << "raiz: " << meuArvore.getRaiz() << endl;
    }
    meuArvore.imprimeAll();


	cout <<endl<<endl;
    ele = 10;
    meuA2.insere(ele);
    ele = 5;
    meuA2.insere(ele);
    ele = 15;
    meuA2.insere(ele);
    ele = 1;
    meuA2.insere(ele);
    ele = 7;
    meuA2.insere(ele);
    ele = 12;
    meuA2.insere(ele);
    ele = 18;
    meuA2.insere(ele);
    cout << "Árvore com nós com 2 descendentes : " << endl;
    meuA2.imprimeAll();

	cout <<endl<<endl;
    cout << "Árvore copiada do anterior: " << endl;
    arvorebb meuA3(meuA2);
    meuA3.imprimeAll();


    cout <<endl<<endl;
    cout << "FIM"<<endl;
    return 0;
}
