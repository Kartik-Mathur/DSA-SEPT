#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a[] = {1, -3, 2, 4};
	int n = sizeof(a)/sizeof(int);

	int ps[100];

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		ps[i] = sum;
	}

	int max_Sum = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			int ans = ps[j] - (i-1>=0 ? ps[i-1]: 0);
			
			max_Sum = max(max_Sum, ans);
		}
	}

	cout << "Max Sum : "<<max_Sum<<endl;
	

	return 0;
}
















