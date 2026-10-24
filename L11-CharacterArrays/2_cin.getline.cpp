#include <iostream>
using namespace std;

int main(){

	char a[100];
	// cin.getline(a, number_of_elements, delimiter);
	// whitespace characters -> ' ', '\t', '\n'
	// It will take input of whitespace characters as well..
	cin.getline(a, 5, '@'); // Yeh by default '\n' character tak input lega
	cout << a << endl;

	return 0;
}
















