#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo1.h"
#include <iostream>

class Lista{
	public: 
	//Crear una lista vacìa.
		Lista() ;
	//Libera todos los nodos que aun quedan en la lista.
		~Lista() ;
	//Agrega un nodo al inicio de la lista.
		void meterLista(int valor) ;
	//Borra un nodo de la lista
		void sacarLista(int valor) ;
	//Determina si la lista esta vacia
		bool listaVacia() ;
	//Regrea el siguiente elemento a sacar de la lista.
		int observaLista() ;
	private:
	//Apuntador al primer elemento de la lista.
		Nodo *inicio ;
};

Lista::Lista(){
	Nodo *inicio ;


}


void Lista::meterLista(int valor){
	Nodo *nuevo ;
	nuevo = new Nodo(valor) ;
	nuevo->pSig = inicio ;
	pInicio = nuevo ;
}

bool Lista::listaVacia(){
	return inicio == NULL ;
}



#endif

