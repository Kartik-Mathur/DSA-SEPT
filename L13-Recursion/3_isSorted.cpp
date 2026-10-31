#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	if(n == 0 or n == 1){
		return true;
	}

	bool isChotaSorted = isSorted(a+1,n-1);
	if(a[0]<=a[1] and isChotaSorted == true){
		return true;
	}
	else{
		return false;
	}
}

int isSorted2(int *a,int n,int i){
	if(i == n-1){
		return true;
	}

	bool isChotaSorted = isSorted2(a,n,i+1);
	if(a[i] <= a[i+1] and isChotaSorted == true){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	if(isSorted(a,n) == true){
		cout << "Sorted hai\n";
	}
	else{
		cout << "Sorted nahi hai\n";
	}

	if(isSorted2(a,n,0) == true){
		cout << "Sorted hai\n";
	}
	else{
		cout << "Sorted nahi hai\n";
	}

	return 0;
}
















