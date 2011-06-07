
#include "fila.h"

fila::fila()
{
    tamanhoAtual = 0;
    tamanhoMaximo = 10;
    filaEle = new elemento[tamanhoMaximo];
}

fila::~fila()
{
    delete filaEle;
}

fila::fila(int t){
    tamanhoAtual = 0;
	if(t>=1) tamanhoMaximo = t;
	else tamanhoMaximo = 10;
	
    filaEle = new elemento[tamanhoMaximo];
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
        ele = filaEle[tamanhoAtual];
        ok = true;
    }
    return;
}
