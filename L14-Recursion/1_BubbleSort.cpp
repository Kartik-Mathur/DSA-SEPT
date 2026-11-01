#include <iostream>
using namespace std;

void bubbleSort(int *a,int n,int i){
	if(i == n-1){
		return;
	}

	for (int j = 0; j < n-1-i; ++j)
	{
		if(a[j] > a[j+1]){
			swap(a[j], a[j+1]);
		}
	}

	bubbleSort(a,n,i+1); // remaining elements recursion sort kar dega
}

int main(){

	int a[] = {4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	bubbleSort(a,n,0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i ] << " ";
	}
	cout << endl;

	return 0;
}
















