#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, -10, 5, 8};
	int n = sizeof(a)/sizeof(int);

	int ans = 0, mx = INT_MIN;
	bool isPositivePresent = false;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>=0) {
			isPositivePresent = true;
		}

		mx = max(mx, a[i]);
		sum += a[i];
		if(sum<0){
			sum = 0;
		}

		ans = max(ans, sum);
	}

	if(isPositivePresent == true){
		cout << ans << endl;
	}
	else{
		cout << mx << endl;
	}


	return 0;
}
















