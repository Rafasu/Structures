#include <iostream>

class NodeTree{
	public: 
		int data ;
		NodoTree *left ;
		NodoTree *right ; 
		NodoTree() ;
		NodoTree(int data) ; 
} ;

NodoTree::NodoTree(int data){
	this->data =  data ;
	left =  NULL ;
	right = NULL ;
}
