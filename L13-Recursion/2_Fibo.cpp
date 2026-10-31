#include <iostream>
using namespace std;

int fibo(int n){
	if(n == 1 or n == 0){
		return n;
	}

	int choti1 = fibo(n-1); // pure assumption
	int choti2 = fibo(n-2); // pure assumption
	int badi = choti1 + choti2;
	return badi;
}

int main(){

	cout << fibo(6)<<endl;
	cout << fibo(7)<<endl;

	return 0;
}
















