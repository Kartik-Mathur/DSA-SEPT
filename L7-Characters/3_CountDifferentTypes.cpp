#include <iostream>
using namespace std;

int main(){

	int digits = 0, alpha = 0, special = 0, spaces = 0;

	char ch;
	ch = cin.get();
	while(ch != '$'){
		if(ch == ' ' or ch == '\t' or ch == '\n'){
			spaces++;
		}
		else if( ch >= '0' and ch <= '9'){
			digits ++;
		}
		else if((ch >= 'A' and ch <= 'Z') or (ch >= 'a' and ch <= 'z')){
			alpha ++;
		}
		else{
			special++;
		}

		ch = cin.get();
	}

	cout << "spaces : "<<spaces << endl;
	cout << "digits : "<<digits << endl;
	cout << "alpha : "<<alpha << endl;
	cout << "special : "<<special << endl;



	return 0;
}
















