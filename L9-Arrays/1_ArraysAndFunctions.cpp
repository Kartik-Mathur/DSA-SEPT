#include <iostream>
using namespace std;

// Array ko print karne ke liye we need array and n(number of elements)
// Arrays are always passed by reference.
void printArray(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){

	int a[5] = {5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	printArray(a,n); // We pass array and size 
	
	return 0;
}
















