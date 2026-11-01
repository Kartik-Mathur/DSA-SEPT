#include <iostream>
using namespace std;

int main(){

	int a[100][100];

	int n,m;
	cout << "Enter Rows and Cols: "; 
	cin>>n>>m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			cin>>a[i][j];
		}
	}

	int key;
	cout << "Enter Key To Search: ";
	cin>>key;
	bool isFound = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			if(a[i][j] == key){
				cout << "Key Found: "<<i<<", "<<j<<endl;
				isFound = true;
				break;
			}
		}

		if(isFound == true){
			break;
		}
	}

	if(isFound == false){
		cout << "Key not found\n";
	}

	return 0;
}
















