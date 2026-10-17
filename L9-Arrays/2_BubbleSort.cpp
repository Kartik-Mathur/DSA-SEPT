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

void bubbleSort(int a[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-1-i; ++j)
		{
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){

	int a[5] = {5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	printArray(a,n); 
	bubbleSort(a,n);
	printArray(a,n); 
	
	return 0;
}
















