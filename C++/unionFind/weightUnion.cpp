/*Weight Union Data Structure

Costs:
Initialization: O(N)
Find: O(lg(N))
Union: 0(lg(N*))
*Includes costs of find.

*/
#include <iostream>
#include <vector>

using namespace std ;

class weightUnion{
	private:
		vector <int> id ;
		vector <int> sz ;

		//Check each object parent until it reaches root.
		int root(int i) ;

	public:
		//Set of id of each object to itself(N vector creations)
		weightUnion(int N) ;

		//Checks if objects(elements) have the same root.
		bool connected(int p, int q) ;

		//Change root of p to point to the root of q.
		void unite(int p, int q) ;
};

weightUnion::weightUnion(int n ){
	for(int i = 0; i < n ; i++){
		id.push_back(i) ;
		sz.push_back(1);
	}
}

int weightUnion::root(int i) {
	while(i != id[i]){
		i = id[i] ;
	}
	return i ;
}

bool weightUnion::connected(int p, int q){
	return root(p) == root(q) ;
}


void weightUnion::unite(int p, int q) {
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
	weightUnion test(5) ;
	test.unite(1, 2) ;
	cout << test.connected(1, 2) ;
	cout << endl << test.connected(3,4) << endl ;
	return 0 ;
}
