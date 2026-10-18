#include <iostream>
using namespace std;

int main(){

	int *x = NULL; // NULL means 0 address, 0th address ko derefer karne par 
	// segmenation fault aati hai

	cout << *x << endl;

	return 0;
}
















