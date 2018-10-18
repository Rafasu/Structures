#ifndef NODO1_H_INCLUDED
#define NODO1_H_INCLUDED


#include <iostream>

using namespace std ;

class Nodo{
	public:
		int dato ;
		Nodo *pSiguiente ;
		Nodo() ;
		Nodo(int dato) ;
};


Nodo::Nodo(){
	int dato = 0 ;
	pSiguiente = NULL ;
}

Nodo::Nodo(int dato){
	this->dato =  dato ;
	pSiguiente = NULL ;
}


#endif
