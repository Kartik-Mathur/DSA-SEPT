#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);
	cout<< "a : " << a << endl; // a is a constant pointer
	
	// a = a + 1; // Illegal operation for constant pointer

	int *x = a;
	cout<< "x : " << x << endl;// x is a variable pointer

	int b = 10;


	x = &b; // x is a variable pointer and we can change its value
	cout<< "x : " << x << endl;

	cout<< "sizeof(a) : " << sizeof(a) << endl;
	cout<< "sizeof(x) : " << sizeof(x) << endl;


	return 0;
}
















