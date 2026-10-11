#include <iostream>
using namespace std;

int b = -4444;

int main(){

	int a = 10;
	int b = -100;

	if ( a > 0 ){

		int b = 100;

		cout << b << endl;
		::b = ::b + 9999;
		cout << ::b << endl; // SCOPE RESOLUTION OPERATOR
	}

	cout << b << endl;




	return 0;
}





















