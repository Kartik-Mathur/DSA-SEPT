#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a[] = {1, 3, 2, 4};
	int n = sizeof(a)/sizeof(int);

	int max_Sum = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			int ans = 0;
			for (int k = i; k <= j; ++k)
			{
				// cout << a[k] << " ";
				ans += a[k]; // add the elements 
			}
			// cout <<", Sum: "<<ans << endl;
			max_Sum = max(max_Sum, ans);
		}
	}

	cout << "Max Sum : "<<max_Sum<<endl;
	

	return 0;
}
















