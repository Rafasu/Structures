/*Path compression weight Union Data Structure

Costs:
Initialization: O(N)
Find: O(lg(N))
Union: 0(lg(N*))
*Includes costs of find. The time finding the root is reduced.

*/
#include <iostream>
#include <vector>

using namespace std ;

class pWeightUnion{
	private:
		vector <int> id ;
		vector <int> sz ;

		//Check each object parent until it reaches root.
		int root(int i) ;

	public:
		//Set of id of each object to itself(N vector creations)
		pWeightUnion(int N) ;

		//Checks if objects(elements) have the same root.
		bool connected(int p, int q) ;

		//Change root of p to point to the root of q.
		void unite(int p, int q) ;
};

pWeightUnion::pWeightUnion(int n ){
	for(int i = 0; i < n ; i++){
		id.push_back(i) ;
		sz.push_back(1);
	}
}

int pWeightUnion::root(int i) {
	while(i != id[i]){
        id[i] = id[id[i]]; //Path compression is only one extra line of code.
		i = id[i] ;
	}
	return i ;
}

bool pWeightUnion::connected(int p, int q){
	return root(p) == root(q) ;
}


void pWeightUnion::unite(int p, int q) {
	int i = root(p);
	int j = root(q) ;
	if(i == j)return ;
	if(sz[i] < sz[j]){
        id[i] = j ;
        sz[j] += sz[i] ;
	}else{
        id[j] = i ;
        sz[i] += sz[j];
	}
}

int main(){
	pWeightUnion test(5) ;
	test.unite(1, 2) ;
	cout << test.connected(1, 2) ;
	cout << endl << test.connected(3,4) << endl ;
	return 0 ;
}
