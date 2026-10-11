#include <iostream>
using namespace std;

int main(){

	int count = 0;

	char ch;
	cin>>ch;
	while(ch != '$'){
		count ++;

		cin>>ch;
	}

	cout << "Count : "<<count << endl;

	return 0;
}
















