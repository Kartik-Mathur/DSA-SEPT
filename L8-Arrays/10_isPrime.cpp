#include <iostream>
using namespace std;

bool isPrime(int n){
	for (int i = 2; i < n; ++i)
	{
		if(n%i == 0){
			return false; // Not prime
		}
	}

	return true;
}

int main(){

	int no;
	cin>>no;

	bool ans = isPrime(no);
	if(ans == true){
		cout << "Prime\n";
	}
	else{
		cout << "Not Prime\n";
	}

	return 0;
}
















