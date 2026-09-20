#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	float inc = 1;

	float ans = 0; // initialisation

	int cp = 0;

	while(cp <= 3){

		while(ans * ans <= n){ // condition
		
			ans = ans + inc; // updation
		}

		ans = ans - inc;

		inc = inc / 10;

		cp = cp + 1;
	}

	cout << ans << endl;
	

	return 0;
}
















