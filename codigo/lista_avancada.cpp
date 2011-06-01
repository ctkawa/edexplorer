#include "lista_avancada.h"

lista_avancada::lista_avancada(){
}
lista_avancada::~lista_avancada(){
}

int lista_avancada::getTamanhoAtual(){
    return tamanhoAtual;
}

bool lista_avancada::vazia(){
    if tamanhoAtual == 0
        return true;
    return false;
}
void lista_avancada::adicionar(no2&, bool&){

}
bool lista_avancada::estaNaLista(elemento&);
void lista_avancada::retirar(no2&, bool&);
void lista_avancada::retirar(elemento&, bool&);
elemento lista_avancada::info(no2&, bool&);
bool lista_avancada::insereADireita(elemento&, no2&);
bool lista_avancada::insereAEsquerda(elemento&, no2&);
