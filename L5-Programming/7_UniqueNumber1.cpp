#include <iostream>
using namespace std;

int main(){

	int n, number;
	cin>>n; // n humesha odd hoga

	int ans = 0;

	int i = 1;
	while(i <= n){

		cin >> number;

		ans = ans ^ number;

		i = i + 1;
	}

	cout << ans << endl;

	return 0;
}
















