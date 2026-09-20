#include <iostream>
using namespace std;

int main(){
	cout << 'A' + 'A' << endl;
	cout << 'A' + 1 << endl;

	char x = 'A' + 1;
	cout << x << endl;

	char ch = 'A';
	int i = 0;
	while(i<26){
		cout << ch << ' ';

		ch = ch + 1;
		i = i + 1;
	}

	cout << endl; // endl == '\n'
	cout << (char)65<<endl;
	cout << (int)'A'<<endl;

	return 0;
}
















