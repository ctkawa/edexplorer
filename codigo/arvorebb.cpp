#include "arvorebb.h"


arvorebb::arvorebb(){
    raiz = NULL;
}
arvorebb::arvorebb(const arvorebb &arv){
    raiz = NULL;
    copiaR(arv.raiz);
}
void arvorebb::copiaR(no2 * const &arv){
    if(arv != NULL){
        elemento ele;
        ele = arv->getInfo();
        insere(ele);
        copiaR(arv->getDir());
        copiaR(arv->getEsq());
    }
}

arvorebb::~arvorebb(){
    //cout << "destruindo ABB"<<endl;
    bool ok;
    elemento e;
    while(!vazia()){
            e = remover(raiz, ok);
            //cout << "abb, removido: " << e << " ok=" << ok << endl;
            if(!ok)
                cout << "erro na destrução de árvore." << endl;
    }
//cout << "FIM destrutor ABB" << endl;
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
    //cout << "inserindo " << e << " para " << no << endl;
    if(no == NULL){
        no = new no2;
        no->setInfo(e);
        //cout << "INSERIDO EM: " << no << endl << "raiz:" << raiz<< endl;
        return true;
    } else if(no->getInfo() > e){
        no2 *temp;
        temp = no->getEsq();
        bool result = insereR(e, temp);
        if(result)
            no->setEsq(temp);
        return result;
    }else{
        no2 *temp;
        temp = no->getDir();
        bool result = insereR(e, temp);
        if(result)
            no->setDir(temp);
        return result;
        //return insereR(e, no->getDir());
        ;
    }
    return false;
}

elemento arvorebb::remover(no2 *no, bool &ok){
    //cout << "REMOVER" << endl;
    return removerR(raiz, no, ok);
}
elemento arvorebb::removerR(no2 *&arvore, no2 *no, bool &ok){
    //cout << "removerR"<< endl;
	elemento ele;
	
    if(arvore==NULL){
        ok = false;
    } else {
        if(arvore == no){
            if(arvore->getDir()==NULL && arvore->getEsq() == NULL){ //no sem descendente
                //cout << "removendo "<< arvore << " sem descendente"<<endl;
                ele = arvore->getInfo();
                delete arvore;
                arvore = NULL;
                ok = true;
            } else if(arvore->getDir()!=NULL && arvore->getEsq() != NULL){ // no com 2 descendentes
                //Inserir direita em direita (maior) da esquerda
                ele = arvore->getInfo();
                //cout << "removendo " << arvore << " com descendentes Dir: " << arvore->getDir() << " e Esq: " << arvore->getEsq();
                maior(arvore->getEsq())->setDir(arvore->getDir());
                arvore->setDir(NULL);
                no2 *temp = arvore;
                arvore = arvore->getEsq();
                //cout << " temp:"<<temp;
                delete temp;
                //cout << "        Removido!" << endl;
                ok = true;
            } else { // no com um descendente
                no2 *temp;
                temp = arvore;
                if(arvore->getDir()!=NULL){
                    arvore = arvore->getDir();
                    //cout << "recebeu dir: " << temp << " <= " << arvore->getDir() << endl;
                } else{
                    arvore = arvore->getEsq();
                    //cout << "recebeu esq: "<< temp  << " <= " << arvore->getEsq() << endl;
                }
                //cout << "FLAG deletando:"<< arvore << " " << arvore->getDir() << " "<< arvore->getEsq()<< endl;
                ele = arvore->getInfo();
                delete temp;
                //cout << "FLAG 2"<< endl;
                ok = true;
            }
        }
    }
    
    return ele;
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
        imprimeAllR(no->getEsq());
        cout << no << " possui " << no->getInfo() << ", Dir=" << no->getDir() << ", Esq=" << no->getEsq() << endl;
        imprimeAllR(no->getDir());
    } else
        //cout << "no nulo" << endl;
        return;
}

