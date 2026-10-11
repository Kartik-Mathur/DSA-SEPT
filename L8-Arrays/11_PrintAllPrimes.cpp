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

void printAllPrimes(int no){
	for (int i = 2; i <= no; ++i)
	{
		if(isPrime(i) == true){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(){

	int no;
	cin>>no;

	printAllPrimes(no);
	
	return 0;
}
















