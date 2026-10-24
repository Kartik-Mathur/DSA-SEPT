#include <iostream>
#include <cstring>
using namespace std;

int length(char *a){
	int len = 0;
	for(int i = 0 ; a[i] != '\0'; i++){
		len++;
	}

	return len;
}

int main(){

	char a[100];
	cin.getline(a,100);

	cout << "Length : "<< length(a) << endl;
	cout << "Length : "<< strlen(a) << endl; // Inbuilt function to find length

	return 0;
}
















