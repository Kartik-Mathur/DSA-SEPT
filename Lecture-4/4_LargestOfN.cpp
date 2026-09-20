#include <iostream>
#include <climits> // INT_MAX : 2^31 - 1, INT_MIN : -2^31
using namespace std;

int main(){

	int n, no;
	cin>>n;
	int ans = INT_MIN;
	int i = 1;
	while(i <= n){

		cin >> no;

		if(no > ans){
			ans = no;
		}

		i = i + 1;
	}

	cout << ans;

	return 0;
}
















