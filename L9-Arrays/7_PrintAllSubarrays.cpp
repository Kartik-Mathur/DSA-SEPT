#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 3, 2, 4};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			// cout << i << ", "<<j<<endl;
			// ith index se jth index tak ke elements ko print kardo
			for (int k = i; k <= j; ++k)
			{
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}

	

	return 0;
}
















