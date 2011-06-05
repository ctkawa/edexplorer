#include "lista_avancada_old.h"

lista_avancada_old::lista_avancada_old(){
    header.dir = &header;
    header.esq = &header;
    header.info = NULL;
    tamanhoAtual = 0;
}
lista_avancada_old::~lista_avancada_old(){
    //retirar e liberar todo elemento
    bool ok;
    while (header.dir != &header){
        retirar(header.dir,ok);
        if (!ok)
            cout << "TEVE PROBLEMAS NO DESTRUTOR LISTA AVANCADA" << endl;
    }

}

int lista_avancada_old::getTamanhoAtual(){
    return tamanhoAtual;
}

bool lista_avancada_old::vazia(){
    if (tamanhoAtual == 0)
        return true;
    return false;
}

void lista_avancada_old::adicionar(elemento& ele, bool& ok){
    no2old *ptrNovo;
    ptrNovo = new no2old();
    ptrNovo->info = ele;
    ptrNovo->dir = header.dir;
    ptrNovo->esq = &header;
    header.dir = ptrNovo;
    ptrNovo->dir->esq = ptrNovo;
    tamanhoAtual++;
    ok = true;
}

bool lista_avancada_old::estaNaLista(const elemento& ele){
    no2old *ptr;
    ptr = header.dir;
    while(ptr != &header){
        if(ptr->info == ele)
            return true;
        ptr = ptr->dir;
    }
    return false;
}

void lista_avancada_old::retirar(no2old *noRetir, bool &ok){
    no2old *ptr;
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

void lista_avancada_old::retirar(elemento& ele, bool& ok){
    ok = false;
    if (estaNaLista(ele)){  // talvez nao tenha sentido fazer isso, vai percorrer 2x
        no2old *ptr;
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

elemento lista_avancada_old::info(no2old& no, bool& ok){   //o q isto deve fazer?
    ok = true;
    return no.info;
}

bool lista_avancada_old::estaNaLista(const no2old *no){ // verifica se o no apontado esta sendo encadeado na lista
    no2old *ptr;
    ptr = &header;
    do{
        if(ptr==no){        //poderia verificar se no.esq aponta para anterior, etc...
            return true;
        }
        ptr = ptr->dir;
    }while(ptr != &header);
    return false;
}
bool lista_avancada_old::insereADireita(elemento &ele, no2old &no){   // inserir no com ELEMENTO na direita do NO2 passado
    if(estaNaLista(&no)){
        no2old *ptrNovo;
        ptrNovo = new no2old();
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
bool lista_avancada_old::insereAEsquerda(elemento& ele, no2old &no){
    if(estaNaLista(&no)){
        no2old *ptrNovo;
        ptrNovo = new no2old();
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

void lista_avancada_old::printAll(){
    no2old *ptr;
    ptr = header.dir;
    while(ptr!=&header){
        std::cout << ptr->info << ", ";
        ptr = ptr->dir;
    }
    std::cout << "Fim da lista" << endl;
    return;
}
