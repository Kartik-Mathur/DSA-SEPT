#include <iostream>
using namespace std;

int power(int x,int n){
	if(n == 0){
		return 1;
	}

	int choti = power(x, n-1);
	int badi = x*choti;
	return badi;
}

int main(){

	cout << power(2, 3)<<endl;

	return 0;
}
















