
#include "fila.h"

fila::fila()
{
    tamanhoAtual = 0;
    tamanhoMaximo = 10;
    elemento filaEle[tamanhoMaximo];
}
fila::~fila()
{
}
fila::fila(int t){
    tamanhoAtual = 0;
    tamanhoMaximo = t;
    elemento filaEle[tamanhoMaximo];
}

int fila::getTamanoAtual(){
    return tamanhoAtual;
}
int fila::getTamanoMaximo(){
    return tamanhoMaximo;
}

bool fila::vazia(){
    if(tamanhoAtual>0)
        return false;
    return true;
}
bool fila::cheia(){
    if(tamanhoAtual < tamanhoMaximo)
        return false;
    return true;
}

void fila::entra(elemento&ele, bool&ok){
    ok = false;
    if (tamanhoAtual < tamanhoMaximo){
        filaEle[tamanhoAtual] = ele;
        tamanhoAtual++;
        ok = true;
    }
    return;
}

void fila::sai(elemento& ele, bool& ok){
    ok=false;
    if(tamanhoAtual>0){
        tamanhoAtual--;             // decremento, aproveitando para correcao de index na recuperacao
        ele = filaEle[tamanhoAtual] ;
        ok = true;
    }
    return;
}


