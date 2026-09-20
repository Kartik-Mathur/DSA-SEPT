#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin>>n;

	int row;
	int number = 1;

	row = 1; // initialisation
	while(row<=n){ // condition check
		i = 1;
		while(i<=row){
			cout << number << ' ';
			number = number + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1; // updation	
	}	

	return 0;
}
















