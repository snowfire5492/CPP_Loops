/*
 *
 *
 *
 *
 *
 */

#include <iostream>
using namespace std;


int main(){

	//
	// WHILE LOOPS
	//

	int i = 0;

	while(i <= 100){

		cout << "i = " << i << endl;

		++i;
	}

	//
	// DO-WHILE LOOPS
	//

	int j = 0;

	do{
		cout << "j = " << j++ << endl;

	}while(j < 10);


	//
	// For loop
	//

	for(int m = 0; m < 10; ++m){
		cout << "m = " << m << endl;
	}

	//
	// break and continue
	//

	for(int m = 0; m < 5; ++m){
		cout << "2m = " << m << endl;
		if(m == 3){
			break;						// breaks out of loop
		}
		cout << "looping ..." << endl;
	}

	for(int n = 0; n < 5; ++n){

		cout << "n = " << n << endl;

		if(n == 3){
			continue;					// skips all code after this and continues loop
		}
		cout << "looping ..." << endl;

	}





	return 0;
}


