#include <iostream>
using namespace std;

void updateString(char *largest, char* a){
	int lena = strlen(a);
	for (int i = 0; i <= lena; ++i)
	{
		largest[i] = a[i];
	}
}

int main(){

	char a[100];
	char largest[100];
	int len_largest = 0; // largest mei koi string nhi hai therefore length is 0

	int n;
	cin>>n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a,100);
		int lena = strlen(a);
		if(lena > len_largest){
			// update largest wali string
			updateString(largest, a);
			len_largest = lena;
		}	
	}

	cout << "Largest String : "<<largest<<endl;
	cout << "Largest Len    : "<<len_largest<<endl;

	return 0;
}
















