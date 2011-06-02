#include "lista_avancada.h"

lista_avancada::lista_avancada(){
    header.dir = &header;
    header.esq = &header;
    header.info = NULL;
    tamanhoAtual = 0;
}
lista_avancada::~lista_avancada(){
    //retirar e liberar todo elemento
    bool ok;
    while (header.dir != &header){
        retirar(header.dir,ok);
        if (!ok)
            cout << "TEVE PROBLEMAS NO DESTRUTOR LISTA AVANCADA" << endl;
    }

}

int lista_avancada::getTamanhoAtual(){
    return tamanhoAtual;
}

bool lista_avancada::vazia(){
    if (tamanhoAtual == 0)
        return true;
    return false;
}

void lista_avancada::adicionar(elemento& ele, bool& ok){
    no2 *ptrNovo;
    ptrNovo = new no2();
    ptrNovo->info = ele;
    ptrNovo->dir = header.dir;
    ptrNovo->esq = &header;
    header.dir = ptrNovo;
    ptrNovo->dir->esq = ptrNovo;
    tamanhoAtual++;
    ok = true;
}

bool lista_avancada::estaNaLista(const elemento& ele){
    no2 *ptr;
    ptr = header.dir;
    while(ptr != &header){
        if(ptr->info == ele)
            return true;
        ptr = ptr->dir;
    }
    return false;
}

void lista_avancada::retirar(no2 *noRetir, bool &ok){
    no2 *ptr;
    ptr = header.dir;
    while(ptr != &header){
        if(ptr == noRetir){
            ptr->dir->esq = ptr->esq;
            ptr->esq->dir = ptr->dir;
            delete ptr;
            ok = true;
            return;
        }
        ptr = ptr->dir;
    }
    ok = false;
    return;
}

void lista_avancada::retirar(elemento& ele, bool& ok){
    ok = false;
    if (estaNaLista(ele)){  // talvez nao tenha sentido fazer isso, vai percorrer 2x
        no2 *ptr;
        ptr = header.dir;
        while(ptr != &header){
            if(ptr->info == ele){
                ptr->dir->esq = ptr->esq;
                ptr->esq->dir = ptr->dir;
                delete ptr;
                ok = true;
                return;
            }
            ptr = ptr->dir;
        }
        ok = false;
        return;
    }
    return;
}

elemento lista_avancada::info(no2& no, bool& ok){   //o q isto deve fazer?
    ok = true;
    return no.info;
}

bool lista_avancada::estaNaLista(const no2 *no){ // verifica se o no apontado esta sendo encadeado na lista
    if (estaNaLista((no->info))){
        no2 *ptr;
        ptr = header.dir;
        while(ptr != &header){
            if(ptr==no){        //poderia verificar se no.esq aponta para anterior, etc...
                return true;
            }
            ptr = ptr->dir;
        }
    }
    return false;
}
bool lista_avancada::insereADireita(elemento &ele, no2 &no){   // inserir no com ELEMENTO na direita do NO2 passado
    if(estaNaLista(&no)){
        no2 *ptrNovo;
        ptrNovo = new no2();
        ptrNovo->info = ele;
        ptrNovo->dir = no.dir;
        ptrNovo->esq = &no;
        no.dir = ptrNovo;
        ptrNovo->dir->esq = ptrNovo;
        tamanhoAtual++;
        return true;
    }
    return false;
}
bool lista_avancada::insereAEsquerda(elemento& ele, no2 &no){
    if(estaNaLista(&no)){
        no2 *ptrNovo;
        ptrNovo = new no2();
        ptrNovo->info = ele;
        ptrNovo->esq = no.esq;
        ptrNovo->dir = &no;
        no.esq = ptrNovo;
        ptrNovo->esq->dir = ptrNovo;
        tamanhoAtual++;
        return true;
    }
    return false;
}

void lista_avancada::printAll(){
    no2 *ptr;
    ptr = header.dir;
    while(ptr!=&header)
        std::cout << ptr->info << ", ";
    return;
}
