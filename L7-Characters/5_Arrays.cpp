#include <iostream>
using namespace std;

int main(){

	int a[100]; // Buckets will have garbage value in it

	int n;
	cout << "Enter number of buckets to input(max: 100) ";
	cin>>n;
	cout << "Enter the data of n buckets now : ";
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]; // User input of buckets
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
















