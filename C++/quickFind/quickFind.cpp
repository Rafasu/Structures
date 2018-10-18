//Union Find: 

//Costs Initialization 	Find 	Union
//		N	1	N
//Problem: Takes n"2 array accesses to process N sequence of union commands.


#include <iostream>
#include <vector>

using namespace std ;

class QuickFind{
	private:
		vector <int> id ;
	public:
		//Constructor
		QuickFind(int N) ;

		//If subsets are connected returns true
		bool connected(int p, int q) ;

		//Unites two subsets.
		void unir(int p, int q) ;
} ;

QuickFind::QuickFind(int N){
	for(int i = 0 ; i < N ; i++){
		id.push_back(i) ;
	}
}

bool QuickFind::connected(int p, int q){
	return ( id[p] == id[q] ) ;
}

void QuickFind::unir(int p, int q){
	int n = id.size() ;
	int pid = id[p] ;
	int qid = id[q] ;
	for(int i  = 0; i < n ; i++){
		if(pid == id[i]){
			id[i] = qid ;
		}
	}
}


int main(){
	QuickFind prueba(3) ;
	prueba.unir(1,2) ;
	cout << prueba.connected(1,2) << endl ;
	cout << prueba.connected(1,3)  << endl ;
	return 0 ;
}
