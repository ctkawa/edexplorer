#include "arvorebb.h"


arvorebb::arvorebb()
{
    raiz = NULL;
}
arvorebb::arvorebb(const arvorebb &e)
{
}

arvorebb::~arvorebb()
{

}

bool arvorebb::vazia(){
    if (raiz == NULL)
        return true;
    return false;
}

bool arvorebb::estaNaArvore(elemento &e){
    return (estaNaArvoreR(e,raiz));
}

bool arvorebb::estaNaArvoreR(elemento &e, no2 *no){
    if(no==NULL){
        return false;
    } else if(no->getInfo() == e){
        return true;
    } else                                                              //ìf(no->getInfo() > e)......
        return (estaNaArvoreR(e,no->dir) || estaNaArvoreR(e,no->esq));
}

bool arvorebb::insere(elemento &e){
    if(estaNaArvore(e))
        return false;
    else
        insereR(e, raiz);
}

bool arvorebb::insereR(elemento &e, no2 *&no){
    if(no == NULL){
        no = new no2;
        no->info = e;
        return true;
    } else if(no->info < e)
        return insereR(e, no->esq);
    else
        return insereR(e, no->dir);
    return false;
}

elemento &arvorebb::remover(no2 *no, bool &ok){
    return removerR(raiz, no, ok);
}
elemento &arvorebb::removerR(no2 *&arvore, no2 *no, bool &ok){
    if(arvore==NULL){
        ok = false;
        elemento e;
        return e;
    } else {
        if(arvore == no){
            if(arvore->dir==NULL && arvore->esq == NULL){ //no sem descendente
                elemento ele;
                ele = arvore->getInfo();
                delete arvore;
                arvore = NULL;
                return ele;
            } else if(arvore->dir!=NULL && arvore->esq != NULL){ // no com 2 descendentes

            } else { // no com um descendente
                no2 *temp;
                temp = arvore;
                if(arvore->dir!=NULL)
                    arvore = arvore->dir;
                else
                    arvore = arvore->esq;
                delete temp;
            }
        }
    }
}









void arvorebb::imprimeAll(){
    imprimeAllR(raiz);
}

void arvorebb::imprimeAllR(no2 *no){
    if(no!=NULL){
        cout << no->getInfo() << endl;
        imprimeAllR(no->esq);
        imprimeAllR(no->dir);
    } else
        cout << "no nulo" << endl;
}

