#include <iostream>
using namespace std;

int sumArray(int *a,int n){
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);

	cout << sumArray(arr+5,n-5)<<endl;
	return 0;
}
















