#include <iostream>
#include <stdlib.h>

using namespace std ;

int main(){
	//This is an example of creating an array.
	//Creates an integer array of size 8, with it's elements are all 0's.
	int exampleArray[8] = {0} ;

	/*
		C exmaple creation of an array
		int *exampleArray2 = (int*) malloc(8 * sizeof(int)) ;  
	*/

	//Checking all the elements in the array. 
	//To access an element of an array: nameOfTheArray[i]
	for(int i = 0 ;  i < 8 ; i++){
		cout << exampleArray[i] << endl ; 
	}

	return 0 ; 
}
