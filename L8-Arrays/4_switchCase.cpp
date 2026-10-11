#include <iostream>
using namespace std;

int main(){

	char ch;
	cin>>ch;

	switch(ch){
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 's':
	case 'S':
		cout << "South\n";
		break;
	case 'E':
	case 'e':
		cout << "East\n";
		break;
	case 'w':
	case 'W':
		cout << "West\n";
		break;
	default:
		cout << "Incorrect Input\n";
	}

	return 0;
}
















