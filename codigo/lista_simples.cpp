#include "lista_simples.h"

lista_simples::lista_simples(){
                               ptrPrimeiro = NULL;
}
lista_simples::~lista_simples(){
                                
}

bool lista_simples::estaNaLista(elemento ele){
     no1 *ptrAux;
     if(ptrPrimeiro == NULL)
       return false;
     else{
       ptrAux = ptrPrimeiro;
       while(ptrAux != NULL)
         if(ptrAux->getInfo() == ele){
           return true;                          
         }
     }
       return false;
     }

bool lista_simples::vazia(){
     if (ptrPrimeiro == NULL)
        return true;
     else
         return false;
        
     }
void lista_simples::insereElemento(int ele){
             if (ptrPrimeiro == NULL){
               ptrPrimeiro = new no1;
               ptrPrimeiro->setInfo(ele);
             }else{
               no1 *ptrUltimo;
               no1 *ptrAux;
               ptrUltimo = ptrPrimeiro;
               while(ptrUltimo->getNext() != NULL)
                 ptrUltimo = ptrUltimo->getNext();
               ptrAux = new no1;
               ptrAux->setInfo(ele);
               ptrAux->setNext(NULL);
               ptrUltimo->setNext(ptrAux);
             }
             }
             
bool lista_simples::removeElemento(int ele){
             no1 *ptrAux;
             no1 *ptrAuxAnterior;
             if(ptrPrimeiro == NULL)
               return false;
             else
               if (ptrPrimeiro->getNext() == NULL)
                 if(ptrPrimeiro->getInfo() == ele){
                   delete [] ptrPrimeiro;
                   ptrPrimeiro = NULL;
                   return true;
                 }
                 else{   
                   ptrAux = ptrPrimeiro;
                   ptrAuxAnterior = NULL;
                   //while((ptrAux->getInfo() !=ele) && (ptrAux->getNext()!=NULL)){
                   while(ptrAux->getInfo() = ele){
                     ptrAuxAnterior = ptrAux;
                     ptrAux = ptrAux->getNext();
                   }
                 }
                 if(ptrAux->getInfo() == ele){
                   ptrAuxAnterior->setNext(ptrAux->getNext());
                   delete [] ptrAux;
                   return true;
                 }
             }
       
       
       
       
       
       
