#include <iostream>
using namespace std;

int kadanes(int a[],int n){
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if(sum<0){
			sum = 0;
		}

		ans = max(ans, sum);
	}

	return ans;
}


int sum(int a[],int n){
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}

	return ans;
}

int main(){

	int a[] = {1, 5, -2, 6, -10, 1, -200, 3, 6};
	int n = sizeof(a)/sizeof(int);

	int op1 = kadanes(a,n);

	// Circular sum kaise nikalein
	int totalSum = sum(a,n);

	// Sign Flip
	for (int i = 0; i < n; ++i)
	{
		a[i] = -a[i];
	}

	int x = kadanes(a,n); // Yeh wala sum original array mei minimum Sum hoga
	int op2 = totalSum + x;
	// cout << op1 << endl;
	// cout << op2 << endl;

	cout << max(op1, op2) << endl;


	return 0;
}
















