#include <iostream>
using namespace std;

int main(){

	int a[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
	};
	int m = 4, n = 3;
	for (int col = 0; col < m; ++col)
	{
		if(col%2 == 0){
			// row => [0, n-1]
			for (int row = 0; row < n ; ++row)
			{
				cout << a[row][col] << " ";
			}
		}
		else{
			// row => [n-1, 0]
			for (int row = n-1; row >= 0; --row)
			{
				cout << a[row][col] << " ";
			}
		}
	}

	return 0;
}
















