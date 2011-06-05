#include "lista_avancada.h"

lista_avancada::lista_avancada(){
<<<<<<< .mine
    header.setDir(&header);
    header.setEsq(&header);
    header.setInfo(NULL);
=======
    header.dir = &header;
    header.esq = &header;
    header.info = NULL;
>>>>>>> .r38
    tamanhoAtual = 0;
}
lista_avancada::~lista_avancada(){
    //retirar e liberar todo elemento
    bool ok;
<<<<<<< .mine
    while ( header.getDir() != &header){
        retirar(header.getDir(),ok);
        if (!ok)
            cout << "TEVE PROBLEMAS NO DESTRUTOR LISTA AVANCADA" << endl;
=======
    while (header.dir != &header){
        retirar(header.dir,ok);
        if (!ok)
            cout << "TEVE PROBLEMAS NO DESTRUTOR LISTA AVANCADA" << endl;
>>>>>>> .r38
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
    no2old *ptrNovo;
    ptrNovo = new no2old();
    ptrNovo->setInfo(ele);
    ptrNovo->setDir(header.getDir());
    ptrNovo->setEsq(&header);
    header.setDir(ptrNovo);
    (ptrNovo->getDir())->setEsq(ptrNovo);
    tamanhoAtual++;
    ok = true;
}

bool lista_avancada::estaNaLista(const elemento& ele){
    no2old *ptr;
    ptr = header.getDir();
    while(ptr != &header){
        if(ptr->getInfo() == ele)
            return true;
        ptr = ptr->getDir();
    }
    return false;
}

void lista_avancada::retirar(no2old *noRetir, bool &ok){
    no2old *ptr;
    ptr = header.getDir();
    while(ptr != &header){
        if(ptr == noRetir){
            (ptr->getDir())->setEsq(ptr->getEsq());
            (ptr->getEsq())->setDir(ptr->getDir());
            delete ptr;
            ok = true;
            return;
        }
        ptr = ptr->getDir();
    }
    ok = false;
    return;
}

void lista_avancada::retirar(elemento& ele, bool& ok){
    ok = false;
    if (estaNaLista(ele)){  // talvez nao tenha sentido fazer isso, vai percorrer 2x
        no2old *ptr;
        ptr = header.getDir();
        while(ptr != &header){
            if(ptr->getInfo() == ele){
                (ptr->getDir())->setEsq(ptr->getEsq());
                (ptr->getEsq())->setDir(ptr->getDir());
                delete ptr;
                ok = true;
                return;
            }
            ptr = ptr->getDir();
        }
        ok = false;
        return;
    }
    return;
}

elemento lista_avancada::info(no2old& no, bool& ok){   //o q isto deve fazer?
    ok = true;
    return no.getInfo();
}

bool lista_avancada::estaNaLista(const no2old *no){ // verifica se o no apontado esta sendo encadeado na lista
    no2old *ptr;
    ptr = &header;
    do{
        if(ptr==no){        //poderia verificar se no.esq aponta para anterior, etc...
            return true;
        }
        ptr = ptr->getDir();
    }while(ptr != &header);
    return false;
}
bool lista_avancada::insereADireita(elemento &ele, no2old &no){   // inserir no com ELEMENTO na direita do NO2 passado
    if(estaNaLista(&no)){
        no2old *ptrNovo;
        ptrNovo = new no2old();
        ptrNovo->setInfo(ele);
        ptrNovo->setDir(no.getDir());
        ptrNovo->setEsq(&no);
        no.setDir(ptrNovo);
        (ptrNovo->getDir())->setEsq(ptrNovo);
        tamanhoAtual++;
        return true;
    }
    return false;
}
bool lista_avancada::insereAEsquerda(elemento& ele, no2old &no){
    if(estaNaLista(&no)){
        no2old *ptrNovo;
        ptrNovo = new no2old();
        ptrNovo->setInfo(ele);
        ptrNovo->setEsq(no.getEsq());
        ptrNovo->setDir(&no);
        no.setEsq(ptrNovo);
        (ptrNovo->getEsq())->setDir(ptrNovo);
        tamanhoAtual++;
        return true;
    }
    return false;
<<<<<<< .mine
}

void lista_avancada::printAll(){
    no2 *ptr;
    ptr = header.getDir();
    while(ptr!=&header){
        std::cout << ptr->getInfo() << ", ";
        ptr = ptr->getDir();
    }
    std::cout << "Fim da lista" << endl;
    return;
=======
>>>>>>> .r38
}

void lista_avancada::printAll(){
    no2old *ptr;
    ptr = header.dir;
    while(ptr!=&header){
        std::cout << ptr->info << ", ";
        ptr = ptr->dir;
    }
    std::cout << "Fim da lista" << endl;
    return;
}
