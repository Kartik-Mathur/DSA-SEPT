#include <iostream>
using namespace std;

void printArray(int *a,int n){
	for (int i = 0; i < n; ++i)
	{
		cout << *(a+i) << " ";
	}
	cout << endl;
}

void reverseArray(int *a,int n){
	int i = 0, j = n-1;
	while(i<j){
		swap(*(a+i),*(a+j));
		i++;
		j--;
	}
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);
	printArray(a,n);
	reverseArray(a,n);
	printArray(a,n);

	return 0;
}
















