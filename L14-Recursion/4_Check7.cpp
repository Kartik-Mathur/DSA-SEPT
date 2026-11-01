#include <iostream>
using namespace std;

bool solve(int *a,int n,int i){
	if(i == n){
		return false;
	}

	if(a[i] == 7){
		return true;
	}

	bool kyaChoteArrayMei7Hai = solve(a,n,i+1);
	if(kyaChoteArrayMei7Hai == true){
		return true;
	}
	else{
		return false;
	}
}

int findFirst7(int *a,int n,int i){
	if(i == n){
		return -1;
	}

	if(a[i] == 7){
		return i;
	}

	int choteArrayMei7KaIndex = findFirst7(a,n,i+1);
	return choteArrayMei7KaIndex;
}

int last7(int *a,int n,int i){
	if(i == -1){
		return -1;
	}

	if(a[i] == 7){
		return i;
	}


	return last7(a,n,i-1);
}

void printAll7(int *a,int n,int i){
	if(i == n){
		return;
	}

	if(a[i] == 7){
		cout << i << " ";
	}


	printAll7(a,n,i+1);
}

int main(){

	int a[] = {1, 2, 7,3, 4, 5, 7};
	int n = sizeof(a)/sizeof(int);

	if(solve(a,n,0) == true){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	cout << findFirst7(a,n,0) << endl;
	cout << last7(a,n,n-1) << endl;
	printAll7(a,n,0);

	return 0;
}
















