// Fila ESTATICA


#include "filaS.h"

filaS::filaS()
{
    tamanhoAtual = 0;
    tamanhoMaximo = 10;
    elemento filaEle[tamanhoMaximo];
}
filaS::~filaS()
{
}
filaS::filaS(int t){
    tamanhoAtual = 0;
    tamanhoMaximo = t;
    elemento filaEle[tamanhoMaximo];
}

int filaS::getTamanoAtual(){
    return tamanhoAtual;
}
int filaS::getTamanoMaximo(){
    return tamanhoMaximo;
}

bool filaS::vazia(){
    if(tamanhoAtual>0)
        return false;
    return true;
}
bool filaS::cheia(){
    if(tamanhoAtual < tamanhoMaximo)
        return false;
    return true;
}

void filaS::entra(elemento&ele, bool&ok){
    ok = false;
    if (tamanhoAtual < tamanhoMaximo){
        filaEle[tamanhoAtual] = ele;
        tamanhoAtual++;
        ok = true;
    }
    return;
}

void filaS::sai(elemento& ele, bool& ok){
    ok=false;
    if(tamanhoAtual>0){
        tamanhoAtual--;             // decremento, aproveitando para correcao de index na recuperacao
        ele = filaEle[tamanhoAtual] ;
        ok = true;
    }
    return;
}


