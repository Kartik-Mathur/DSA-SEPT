#include <iostream>
using namespace std;

void readInput(char *a, int n, char delimiter = '\n'){
	int i = 0;
	char ch = cin.get();
	while(ch != delimiter and i < n - 1){
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

int main(){

	char a[100];
	readInput(a,100, '#');
	cout << a << endl;

	return 0;
}
















