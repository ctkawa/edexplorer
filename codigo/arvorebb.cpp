#include "arvorebb.h"


arvorebb::arvorebb(){
    raiz = NULL;
}
arvorebb::arvorebb(const arvorebb &e){
}

arvorebb::~arvorebb(){

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
        return (estaNaArvoreR(e,no->getDir()) || estaNaArvoreR(e,no->getEsq()));
}

bool arvorebb::insere(elemento &e){
    if(estaNaArvore(e))
        return false;
    else
        return insereR(e, raiz);
}

bool arvorebb::insereR(elemento &e, no2 *&no){  //referencia de ponteiro
    cout << "inserindo " << e << " para " << no << endl;
    if(no == NULL){
        no = new no2;
        no->setInfo(e);
        cout << "INSERIDO EM: " << no << endl << "raiz:" << raiz<< endl;
        return true;
    } else if(no->getInfo() < e){
        no2 *temp;
        temp = no->getEsq();
        insereR(e, temp);
        no->setEsq(temp);
        ;
    }else{
        no2 *temp;
        temp = no->getDir();
        insereR(e, temp);
        no->setDir(temp);
        //return insereR(e, no->getDir());
        ;
    }
    return false;
}

elemento &arvorebb::remover(no2 *no, bool &ok){
    return removerR(raiz, no, ok);
}
elemento &arvorebb::removerR(no2 *arvore, no2 *no, bool &ok){
    if(arvore==NULL){
        ok = false;
        elemento e;
        return e;
    } else {
        if(arvore == no){
            if(arvore->getDir()==NULL && arvore->getEsq() == NULL){ //no sem descendente
                elemento ele;
                ele = arvore->getInfo();
                delete arvore;
                arvore = NULL;
                ok = true;
                return ele;
            } else if(arvore->getDir()!=NULL && arvore->getEsq() != NULL){ // no com 2 descendentes
                //Inserir direita em direita (maior) da esquerda
                maior(arvore->getEsq())->setDir(arvore->getDir());
                arvore->setDir(NULL);
            } else { // no com um descendente
                no2 *temp;
                temp = arvore;
                if(arvore->getDir()!=NULL)
                    arvore = arvore->getDir();
                else
                    arvore = arvore->getEsq();
                delete temp;
            }
        }
    }
}

no2* arvorebb::maior(no2 *raiz){
    if(raiz==NULL)
        return NULL;
    else if(raiz->getDir()==NULL)
        return raiz;
    else
        return maior(raiz->getDir());
}







void arvorebb::imprimeAll(){
    cout << "Imprimindo tudo, raiz = "<<raiz<<endl;
    imprimeAllR(raiz);
}

void arvorebb::imprimeAllR(no2 *no){
    if(no!=NULL){
        cout << no->getInfo() << endl;
        imprimeAllR(no->getEsq());
        imprimeAllR(no->getDir());
    } else
        //cout << "no nulo" << endl;
        return;
}

