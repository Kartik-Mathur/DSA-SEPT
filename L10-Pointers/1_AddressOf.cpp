#include <iostream>
using namespace std;

int main(){	
	int arr[] = {1, 2, 3, 4, 5};	

	cout << arr << endl;
	cout << &arr[0] << endl;

	int a = 10;
	cout << "&a : "<<&a<<endl;
	double d = 10.11;

	cout << sizeof(&a) << endl;
	cout << sizeof(&d) << endl;

	char ch = 'A';
	// cout << &ch << endl;

	// Fool the compiler to get character bucket ka address
	char *chp = &ch;

	cout << (int*)&ch << endl;
	cout << (void*)chp << endl;
	cout << (float*)chp << endl;
	cout << &chp << endl;



	return 0;
}
















