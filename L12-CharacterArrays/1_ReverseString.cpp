#include <iostream>
#include <algorithm> // reverse()
#include <cstring>
using namespace std;

void reverseString(char *a){
	int i = 0, j = strlen(a) - 1;
	while(i<j){
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

int main(){

	char a[] = "Anmol";

	// reverseString(a);
	int len = strlen(a);
	reverse(a,a+len); // Inbuilt function [startAddress, endAddress)

	cout << a << endl;

	return 0;
}
















