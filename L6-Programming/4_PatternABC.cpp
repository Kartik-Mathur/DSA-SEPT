#include <iostream>
using namespace std;

int main(){
	int i, row, n;
	cin>>n;

	for(row = 1 ; row <= n ; row++){
		// Increasing characters print ho gaye
		char ch  = 'A';
		for(i = 1 ; i <= n - row + 1; i++){
			cout << ch;
			ch++;
		}
		
		ch--; // Yaha se decreasing print karne hai

		// Decreasing characters
		for(i = 1 ; i <= n - row + 1; i++){
			cout << ch;
			ch--;
		}
		
		cout << endl;
	}



	return 0;
}
















