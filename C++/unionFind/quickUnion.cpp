/*Quick Union Data Structure
Lazy approach

Costs:
Initialization: O(N)
Find: O(N)
Union: 0(N*)
*Includes costs of find.

Problem: Trees can get tall.
Find to expensive.
Need to do find to do union.
*/
#include <iostream>
#include <vector>

using namespace std ;

class QuickUnion{
	private:
		vector <int> id ;

		//Check each object parent until it reaches root.
		int root(int i) ;

	public:
		//Set of id of each object to itself(N vector creations)
		QuickUnion(int N) ;

		//Checks if objects(elements) have the same root.
		bool connected(int p, int q) ;

		//Change root of p to point to the root of q.
		void unite(int p, int q) ;
};

QuickUnion::QuickUnion(int n ){
	for(int i = 0; i < n ; i++){
		id.push_back(i) ;
	}
}

int QuickUnion::root(int i) {
	while(i != id[i]){
		i = id[i] ;
	}
	return i ;
}

bool QuickUnion::connected(int p, int q){
	return root(p) == root(q) ;
}


void QuickUnion::unite(int p, int q) {
	int oldRoot = root(p) ;
	int newRoot = root(q) ;
	id[oldRoot] = newRoot ;
}

int main(){
	QuickUnion test(5) ;
	test.unite(1, 2) ;
	cout << test.connected(1, 2) ;
	cout << endl << test.connected(3,4) << endl ;
	return 0 ;
}
