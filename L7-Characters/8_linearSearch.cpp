#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a)/sizeof(int);
	
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	int key;
	cout << "Enter key to search : ";
	cin>>key;

	int indx = -1; // Initially assume indx of key to be -1
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == key){
			indx = i; // Key mill gai ith index par update kardo indx variable ko
			break; // since we found the key no need to keep the loop running break it
		}
	}

	if(indx == -1){
		cout << "Key not found\n";
	}
	else{
		cout << "Key found at : "<< indx << endl;
	}

	return 0;
}
















