#include <iostream>
using namespace std;

int main(){
	// Initialisation means variable banante time hi usse value de dena
	// 1. We can skip the size of array during initialisation
	
	// int a[5] = {1,2,3,4,5}; // We can skip writing 5 as the size during initialisation
	// int a[10] = {1,2,3,4,5}; // -> [1,2,3,4,5,0,0,0,0,0]
	// int a[10] = {}; // -> [0,0,0,0,0,0,0,0,0,0]
	// int a[10] = {-1}; // -> [-1,0,0,0,0,0,0,0,0,0]
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	// How to find size?
	// int n = 10; // 1st way
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;


	return 0;
}
















