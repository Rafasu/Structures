/*Union Find:
Eager approach.

Costs:
Initialization: O(N)
Find: O(1)
Union: 0(N)

Problem: Takes n^2 array accesses to process N sequence of union commands.
*/

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

		//Connects two subsets.
		void unite(int p, int q) ;
} ;

QuickFind::QuickFind(int N){
	for(int i = 0 ; i < N ; i++){
		id.push_back(i) ;
	}
}

bool QuickFind::connected(int p, int q){
	return ( id[p] == id[q] ) ;
}

void QuickFind::unite(int p, int q){
	int n = id.size() ;
	int pid = id[p] ;
	int qid = id[q] ;
	for(int i  = 0; i < n ; i++){
		if(pid == id[i]){   2
			id[i] = qid ;
		}
	}
}


int main(){
	QuickFind test(3) ;
	test.unite(1,2) ;
	cout << test.connected(1,2) << endl ;
	cout << test.connected(1,3)  << endl ;
	return 0 ;
}
